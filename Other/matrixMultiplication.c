#include <stdio.h>
#include <time.h>
void main()
{
    time_t start, end;
    int n;
    printf("Enter nXn Matrix Size\n");
    scanf("%d", &n);
    int matrix1[n][n], matrix2[n][n], matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    printf("Enter values of Matrix\n");
    printf("1st Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Value at Index %d,%d : ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("2st Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Value at Index %d,%d : ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    start = clock();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = 0;
            while (k < n)
            {
                matrix[i][j] += matrix1[i][k] * matrix2[k][j];
                k++;
            }
        }
    }
    end = clock();
    printf("Multiplied Matrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Time Required : %.6ld", (double)(end - start) / CLOCKS_PER_SEC);
}
