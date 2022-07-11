#include <stdio.h>
#include <stdlib.h>
#define INF 999

void kruskals(int **input, int n, int source)
{
    int **graph = (int **)malloc(n * sizeof(int));
    int *parent = (int *)malloc(n * sizeof(int));
    int *visited = (int *)malloc(n * sizeof(int));
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
        parent[i] = 0;
        visited[i] = 0;
        graph[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = (input[i][j] == 0) ? INF : input[i][j];
        }
    }

    printf("----------------------\n\tMST\t\nSource -> %c\n", 65 + source);
    for (int i = 0; i < n - 1;)
    {
        int min = INF, u = INF, a = u, v = INF, b = v;
        for (int k = 0; k < n; k++)
        {
            for (int l = 0; l < n; l++)
            {
                if (graph[k][l] < min)
                {
                    min = graph[k][l];
                    a = u = k;
                    b = v = l;
                }
            }
        }
        while (parent[u])
            u = parent[u];
        while (parent[v])
            v = parent[v];
        if (u != v)
        {
            printf("Edge %c - %c at cost %d\n", 65 + a, 65 + b, input[a][b]);
            cost += min;
            parent[v] = u;
            i++;
        }
        graph[a][b] = graph[b][a] = INF;
    }

    printf("Total Cost : %d", cost);
}
void main()
{

    int n;
    printf("Enter No of Vertices\n");
    scanf("%d", &n);
    int **graph = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        graph[i] = (int *)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                graph[i][j] = INF;
            }
            else
            {
                printf("%c to %c Value\t", 65 + i, 65 + j);
                scanf("%d", &graph[i][j]);
            }
        }
    }
    int source;
    printf("Enter Source : ");
    scanf("%d", &source);
    kruskals(graph, n, source);
}