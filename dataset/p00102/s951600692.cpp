#include <cstdio>
#include <cstring>

int map[11][11];

int main(void)
{
    while(true) {
        int n;

        scanf("%d", &n);
        if(!n) break;

        memset(map, 0, sizeof(map));

        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &map[i][j]);

        for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            map[i][n] += map[i][j];
        for(int j=0; j<=n; j++)
        for(int i=0; i<n; i++)
            map[n][j] += map[i][j];

        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
                printf("%5d", map[i][j]);
            printf("\n");
        }

    }
    return 0;
}