#include <stdio.h>
#define inf 999
void main()
{
    int n;
    printf("Enter no Of vertices\n");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter Elements\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Egde from %c  %c : ", 65 + i, 65 + j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 0)
            {
                arr[i][j] = inf;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((arr[i][k] + arr[k][j]) < arr[i][j])
                {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t", arr[i][j]);
            }
        }
        printf("\n");
    }
}
