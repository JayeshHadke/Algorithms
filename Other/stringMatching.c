#include <stdio.h>
void main()
{
    int n = 10, m = 3;
    int arr[] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 1}, darr[] = {1, 0, 1};
    for (int i = 0; i < n - m; i++)
    {
        int j = 0;
        while (j < m && darr[j] == arr[i + j])
        {
            j++;
            if (j == m)
            {
                printf("\nElement Found at Location %d\n", i);
            }
        }
    }
}