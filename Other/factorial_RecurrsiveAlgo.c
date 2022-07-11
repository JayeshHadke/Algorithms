#include <stdio.h>
#include <time.h>
clock_t start, end;
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void main()
{
    int value;
    printf("----------------\nEnter Value of N\n");
    scanf("%d", &value);
    start = clock();
    printf("Factorial of %d is %d\n----------------\n", value, factorial(value));
    end = clock();
    printf("Time Taken to execute : %0.4lf", (double)(end - start) / CLOCKS_PER_SEC);
}