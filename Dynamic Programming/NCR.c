#include <stdio.h>
int nCr(int n, int r, int arr[n + 1][r + 1])
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else if (!(j > i))
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }

    return arr[n][r];
}
void main()
{
    int n, r;
    printf("Enter Value of N\n");
    scanf("%d", &n);
    printf("Enter Value of r (r must be less than or eqaul to N)\n");
    scanf("%d", &r);
    printf("\n");

    int arr[n + 1][r + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= r; j++)
        {
            arr[i][j] = -1;
        }
    }

    printf("%dC%d value is %d \n", n, r, nCr(n, r, arr));
}