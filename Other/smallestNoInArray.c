#include <stdio.h>
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
    printf("Smallest of All Elements is %d\n-------------------\n", smallest(arr, n));
}