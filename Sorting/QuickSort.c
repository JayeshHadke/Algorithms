#include <stdio.h>
#include <time.h>
clock_t start, end;
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
        printf("---------------\n");
    }
    goto back;
}

void quickSort(int arr[], int first, int last)
{
    if (first < last)
    {
        int pivot = pivotIndex(arr, first, last);

        quickSort(arr, first, pivot);
        quickSort(arr, pivot + 1, last);
    }
}
void main()
{
    int n;
    printf("Enter No of Elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    start = clock();
    quickSort(arr, 0, n);
    end = clock();
    printf("---------------\n");
    printf("Sorted Array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("Time Needede to execute is %.10lf", (double)(end - start) / CLOCKS_PER_SEC);
}