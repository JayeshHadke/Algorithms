#include <stdio.h>
#include <time.h>
int largest(int arr[], int size)
{
    //here we can solve this using index value
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
int smallest(int arr[], int size)
{
    //here we can solve this using index value
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
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
    clock_t start = clock();
    int large = largest(arr, n), small = smallest(arr, n);
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Largest & Smallest of All Elements is %d & %d .\nAnd time taken is %.2lf\n-------------------\n", large, small, time);
}