#include <stdio.h>
int linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
            return i + 1;
    }
    return -1;
}
void main()
{
    int n, value;
    printf("-------------------\nEnter no of Elements in Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter key Element\n");
    scanf("%d", &value);
    int flag = linearSearch(arr, n, value);
    if (flag == -1)
    {
        printf("Value not Found!\n-------------------\n");
    }
    else
    {
        printf("Value Found at %d \n-------------------\n", flag);
    }
}