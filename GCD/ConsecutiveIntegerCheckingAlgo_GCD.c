#include <stdio.h>
int gcd(int m, int n)
{
    //if n is > than m then swap m and n
    if (n > m)
    {
        m += n;
        n = m - n;
        m = m - n;
    }
    //divide i by m & n, if reminder is 0 then return i value.And initially i is n(which is less value from two inputs) and decrement after each itreation
    for (int i = n; i > 0; i--)
    {
        if (m % i == 0 && n % i == 0)
        {
            return i;
        }
    }
}
void main()
{
    int m, n;
    printf("Enter Numbers for GCD\n");
    scanf("%d %d", &m, &n);
    printf("%d", gcd(m, n));
}