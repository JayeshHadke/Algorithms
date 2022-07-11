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
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            arr[i] += arr[minIndex];
            arr[minIndex] = arr[i] - arr[minIndex];
            arr[i] -= arr[minIndex];
        }
        /*Or

        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;

        */
        // swap using temp
    }
    end = clock();
    printf("\nClock Time : %.2ld\n", (double)(end - start) / CLOCKS_PER_SEC);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n---------------");
}