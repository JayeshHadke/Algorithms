#include <stdio.h>
int fib(int r, int F[])
{
    if (r == 0 || r == 1)
    {
        return r;
    }
    if (F[r] != -1)
    {
        return F[r];
    }
    return F[r] = (fib(r - 1, F) + fib(r - 2, F));
}
void main()
{
    int n;
    printf("Enter Nth Element to find: \n");
    scanf("%d", &n);
    int F[n + 1];
    for (int i = 0; i <= n; i++)
    {
        F[i] = -1;
    }

    F[0] = 0, F[1] = 1;
    printf("\n%d", fib(n, F));
}
