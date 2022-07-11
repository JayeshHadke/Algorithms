#include <stdio.h>
#include "Sort.h"
#include <time.h>
int key;
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
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (!(temp <= arr[i]))
        {
        }
        printf("\nGiven Array is Not Sorted Array!!!\n");
        sort(arr, 0, n);
        printf("\nSorted Array is :\n");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[j]);
        }
        printf("\n\n");
        break;
    }

    int first = 0, last = n - 1, flag = 0, index = -1;
    start = clock();
back:
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (key == arr[mid])
        {
            index = mid;
            flag = 1;
            goto end;
        }
        else if (key > arr[mid])
        {
            first = mid + 1;
            goto back;
        }
        else
        {
            last = mid - 1;
            goto back;
        }
    }

end:
    end = clock();
    if (flag == 1 && index != -1)
    {
        printf("Element Found at Index : %dth \n", index);
    }
    else
    {
        printf("Element Not Found!!!");
    }
    printf("Time Needed to Execute Program is %0.10lf", (double)(end - start));
}