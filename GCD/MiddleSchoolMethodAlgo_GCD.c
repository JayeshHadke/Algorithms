#include <stdio.h>
void factorization(int value, int arr[])
{
    int i = 0;
    while (value % 2 == 0)
    {
        arr[i++] = 2;
        value = value / 2;
    }
    for (int i = 3; i <= value; i = i + 2)
    {
        while (value % i == 0)
        {
            arr[i++] = i;
            value = value / i;
        }
    }
    if (value > 2)
        arr[i++] = value;
}
int gcd(int m, int n)
{
    int i = 0, j = 0;
    int arr1[10] = {0};
    factorization(m, arr1);
    puts("I am in");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }

    // int arr2[10] = {0};
    // factorization(n, arr2);
}
void main()
{
    printf("%d", gcd(92, 13));
}