#include <stdio.h>
#include <time.h>
void TOH(int n, char s, char d, char t)
{
    if (n == 1)
    {
        printf("Disk %d from %c to %c\n", n, s, d);
    }
    else
    {
        TOH(n - 1, s, t, d);
        printf("Disk %d from %c to %c\n", n, s, d);
        TOH(n - 1, t, d, s);
    }
}
void main()
{
    clock_t start, end;
    start = clock();
    TOH(5, 'S', 'D', 'T');
    end = clock();
    printf("%.2lf", (double)(end - start) / CLOCKS_PER_SEC);
}
