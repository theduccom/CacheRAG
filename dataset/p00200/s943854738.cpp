#include <stdio.h>

#define min(x, y) ((x) < (y) ? (x) : (y))

int main(void)
{
    int cost[100][100];
    int time[100][100];
    int n, m;
    int k;
    
    while (1){
        for (int i = 0; i < 100; i++){
            for (int j = 0; j < 100; j++){
                cost[i][j] = time[i][j] = 100000000;
            }
        }
        
        scanf("%d %d", &n, &m);
        
        if (n == 0){
            break;
        }
        
        for (int i = 0; i < n; i++){
            int a, b, c, t;
            
            scanf("%d%d%d%d", &a, &b, &c, &t);
            a--;
            b--;
            cost[a][b] = cost[b][a] = min(cost[a][b], c);
            time[a][b] = time[b][a] = min(time[a][b], t);
        }
        
        for (int k = 0; k < m; k++){
            for (int i = 0; i < m; i++){
                for (int j = 0; j < m; j++){
                    cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
                    time[i][j] = min(time[i][j], time[i][k] + time[k][j]);
                }
            }
        }
        
        
        scanf("%d", &k);
        for (int i = 0; i < k; i++){
            int a, b, r;
            
            
            scanf("%d%d%d", &a, &b, &r);
            
            a--;
            b--;
            
            if (r == 0){
                printf("%d\n", cost[a][b]);
            }
            else {
                printf("%d\n", time[a][b]);
            }
        }
    }
    
    return (0);
}