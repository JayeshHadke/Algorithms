#include <stdio.h>
#include <time.h>
int gcd(int m, int n)
{
    // if n is > than m then swap m and n
    //  m should be greater than n
    if (n > m)
    {
        m += n;
        n = m - n;
        m = m - n;
    }
    // if n is 0 then return m
    if (n == 0)
    {
        return m;
    }
    // recurrsion by passing m <- n,n <- m%n
    return gcd(n, m % n);
}
void main()
{
    int m, n;
    clock_t start, end;
    printf("Enter Numbers for GCD\n");
    scanf("%d %d", &m, &n);
    start = clock();
    printf("%d", gcd(m, n));
    end = clock();
    printf("\nTime Taken is %.2lf", (double)(end - start) / CLOCKS_PER_SEC);
}
