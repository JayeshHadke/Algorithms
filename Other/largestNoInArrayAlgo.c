#include <stdio.h>
#include <time.h>
clock_t start, end;
int largest(int arr[], int size)
{
    // here we can solve this using index value
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
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
    printf("Largest of All Elements is %d\n-------------------\n", largest(arr, n));
    end = clock();
    printf("Time Taken to execute : %.4lf", (double)(end - start) / CLOCKS_PER_SEC);
}