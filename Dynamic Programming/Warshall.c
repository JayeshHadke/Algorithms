#include <stdio.h>
#define inf 999
int max(int a, int b)
{
    if (a != b)
        return (a > b) ? a : b;
    else
        return a;
}
void main()
{
    int n;
    printf("Enter no Of vertices\n");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter Values\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Egde from %c  %c : ", 65 + i, 65 + j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                arr[i][j] = max((arr[i][k] && arr[k][j]), arr[i][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            printf("%4d\t", arr[i][j]);
        }
        printf("\n");
    }
}
