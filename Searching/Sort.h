#include <stdio.h>
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int pivotIndex(int arr[], int first, int last)
{
    int pivot = first, i = first + 1, j = last - 1;

back:
    while ((arr[pivot] >= arr[i]) && i < last)
        i++;
    while ((arr[pivot] < arr[j]) && j > first)
        j--;

    if (i > j)
    {
        swap(arr, pivot, j);
        return j;
    }
    else
    {
        swap(arr, i, j);
    }
    goto back;
}
void sort(int arr[], int first, int last)
{
    if (first < last)
    {
        int pivot = pivotIndex(arr, first, last);

        sort(arr, first, pivot);
        sort(arr, pivot + 1, last);
    }
}