#include <stdio.h>
#include <time.h>
clock_t start, end;
int unique(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
            }
        }
    }
    return -1;
}
void main()
{
    int n;
    printf("-------------------\nEnter no of Elements in Array\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter Elements of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    start = clock();
    int result = unique(arr, n);
    end = clock();
    if (result == -1)
    {
        printf("Array is Unique!");
    }
    else
    {
        printf("Array is not Unique becaues of %d value in array.\n-------------------\n", result);
    }
    printf("Time Taken to execute : %.4lf", (double)(end - start) / CLOCKS_PER_SEC);
}
