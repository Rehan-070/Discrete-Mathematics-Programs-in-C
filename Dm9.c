#include <stdio.h>

#define INF 999

int main() {
    int n, i, j, a, b, min, mincost = 0, ne = 1;
    int cost[10][10], visited[10] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0) {
                cost[i][j] = INF;
            }
        }
    }

    visited[1] = 1;

    while (ne < n) {
        min = INF;
        for (i = 1; i <= n; i++) {
            if (visited[i]) {
                for (j = 1; j <= n; j++) {
                    if (!visited[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }

        if (min == INF) {
            printf("No spanning tree possible.\n");
            return 0;
        }

        printf("Edge %d-%d = %d\n", a, b, min);
        mincost += min;
        visited[b] = 1;
        cost[a][b] = cost[b][a] = INF;
        ne++;
    }

    printf("\nMinimum cost = %d\n", mincost);

    return 0;
}