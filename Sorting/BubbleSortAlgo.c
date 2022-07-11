#include <stdio.h>
#include <time.h>
void main()
{
    clock_t start, end;
    int n;
    printf("---------------\nEnter no of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    start = clock();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] -= arr[j + 1];
            }
        }
    }
    end = clock();
    printf("\nClock Time : %.2ld\n", (double)(end - start) / CLOCKS_PER_SEC);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n---------------");
}
