#include <stdio.h>

#define MAX 10

int graph[MAX][MAX];
int visited[MAX];
int vertices;

void dfs(int vertex) {
    int i;

    visited[vertex] = 1;
    printf("%d ", vertex);

    for (i = 0; i < vertices; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (i = 0; i < vertices; i++)
        visited[i] = 0;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    dfs(start);

    printf("\n");

    return 0;
}
