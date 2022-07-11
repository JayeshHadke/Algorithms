#include <stdio.h>
void merge(int[], int, int, int);
void mergeSort(int[], int, int);
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

    mergeSort(arr, 0, n);
    printf("Sorted Array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void mergeSort(int arr[], int first, int last)
{

    if (first == (last - 1))
    {
        return;
    }
    int mid = (first + last) / 2;
    mergeSort(arr, first, mid);
    mergeSort(arr, mid, last);
    merge(arr, first, mid, last);
}

void merge(int arr[], int first, int mid, int last)
{
    int A[mid - first], B[last - mid];
    int x = 0, y = first;
    while (y < mid)
    {
        A[x++] = arr[y++];
    }
    x = 0;
    while (y < last)
    {
        B[x++] = arr[y++];
    }

    x = 0, y = 0;
    int z = first;
    while (x < (mid - first) && y < (last - mid))
    {
        if (A[x] < B[y])
        {
            arr[z++] = A[x++];
        }

        else
        {
            arr[z++] = B[y++];
        }
    }

    while (y < (last - mid))
        arr[z++] = B[y++];

    while (x < (mid - first))
        arr[z++] = A[x++];
}
