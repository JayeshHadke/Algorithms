#include <stdio.h>
#include <stdlib.h>
#define INF 999
void dijkstars(int n, int **graph, int source)
{
    int *distance = (int *)malloc(n * sizeof(int));
    int *visited = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        distance[i] = INF;
        visited[i] = 0;
    }
    distance[source] = 0;
    for (int k = 0; k < n; k++)
    {
        int min = INF, minIndex = -1;
        for (int i = 0; i < n; i++)
        {
            if (distance[i] < min && !visited[i])
            {
                min = distance[i];
                minIndex = i;
            }
        }
        visited[minIndex] = 1;
        for (int i = 0; i < n; i++)
        {
            if (graph[minIndex][i] && !visited[i] && distance[minIndex] != INF && (distance[i] > distance[minIndex] + graph[minIndex][i]))
            {
                distance[i] = distance[minIndex] + graph[minIndex][i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        printf(" %c -> %d ", 65 + i, distance[i]);
    }
}
void main()
{
    int n;
    printf("Enter No of Elements\n");
    scanf("%d", &n);
    int **graph = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        graph[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                graph[i][j] = 0;
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
    dijkstars(n, graph, source);
}
