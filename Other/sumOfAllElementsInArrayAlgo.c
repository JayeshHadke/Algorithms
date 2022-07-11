#include <stdio.h>
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
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
    printf("Sum of All Elements is %d\n-------------------\n", sum(arr, n));
}