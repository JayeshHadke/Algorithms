
#include <stdio.h>
#include <time.h>
int key;
int binarySearch(int arr[], int first, int last)
{
    if (first <= last)
    {
        int mid = (first + last) / 2;
        // printf("First %d Last %d Mid %d\n", first, last, mid);       \ Debug
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return binarySearch(arr, mid + 1, last);
        }
        else
        {
            return binarySearch(arr, first, mid - 1);
        }
    }
    return -1;
}
void main()
{
    time_t start, end;
    int n;
    printf("Enter No of Elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter Key Elements\n");
    scanf("%d", &key);
    printf("Key Elements %d \n", key);
    start = clock();
    int temp = binarySearch(arr, 0, n - 1);
    end = clock();
    if (temp != -1)
    {
        printf("Element Found at %dth Index \n", temp);
    }
    else
    {
        printf("Element Not Found\n");
    }
    printf("Time Needed to Execute Program is %0.10lf", (double)(end - start));
}
