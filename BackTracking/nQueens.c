#include <stdio.h>
#include <stdlib.h>
int isSafe(int **board, int n, int row, int column)
{
    int i = 0;
    while (i < n)
    {
        if (board[row][i] || board[i][column])
            return 0;
        i++;
    }
    i = row;
    int j = column;
    while (i != 0 || j != 0)
    {
        if (board[i][j])
            return 0;

        i--, j--;
    }
    i = row;
    int j = column;
    while (i != n || j != n)
    {
        if (board[i][j])
            return 0;
        i++, j++;
    }
    return 1;
}
int solveNQueens(int **board, int n, int row)
{
    if (row >= n)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (!isSafe(board, n, row, i))
            return 0;
    }
}
void main()
{
    int n;
    printf("Enter Number of Queens : ");
    scanf("%d", &n);

    int **board = (int **)malloc(sizeof(int));
    for (int i = 0; i < n; i++)
    {
        board[i] = (int *)malloc(sizeof(int));
        for (int j = 0; j < n; j++)
        {
            {
                board[i][j] = 0;
            }
        }
        if (!solveNQueens(board, n, 0))
        {
            printf("Solution Doesnot Exsits\n");
        }
    }
