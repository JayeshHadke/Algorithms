#include <stdio.h>
#include <time.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = n; i > 0; i--)
        fact *= i;

    return fact;
}
void main()
{
    clock_t start, end;
    int value;
    printf("----------------\nEnter Value of N\n");
    scanf("%d", &value);
    start = clock();
    printf("Factorial of %d is %d\n----------------\n", value, factorial(value));
    end = clock();
    printf("Time Requred is : %0.4lf", (double)(end - start) / CLOCKS_PER_SEC);
}