#include <stdio.h>
int max(int a, int b)
{
    return a > b ? a : b;
}
void knapsack(int val[], int wt[], int n, int w)
{
    int arr[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
            else if (wt[i] <= j)
            {
                arr[i][j] = max(arr[i - 1][j], val[i] + arr[i - 1][j - wt[i]]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
        }
    }
    printf("\nMax Profit : %d\n", arr[n][w]);
}
void main()
{
    int n, w;
    printf("Enter Number of Elements\n");
    scanf("%d", &n);
    int wt[n + 1], val[n + 1];
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Weight and Value of %d Element\n", i);
        scanf("%d %d", &wt[i], &val[i]);
    }
    printf("Enter Weight of Container\n");
    scanf("%d", &w);
    printf("\n");
    knapsack(val, wt, n, w);
}