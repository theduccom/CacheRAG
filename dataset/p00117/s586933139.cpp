#include <algorithm>
#include <stdio.h>

#define N 20
#define INF 10e6

int main(void){
    int cost[N][N];
    int n,m;
    int s,g,v,p;
    
    scanf("%d%d", &n, &m);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cost[i][j] = INF;
        }
    }
    for (int i=0; i<m; i++){
        int a,b,c,d;
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        a--; b--;
        cost[a][b] = c;
        cost[b][a] = d;
    }
    scanf("%d,%d,%d,%d",&s,&g,&v,&p);
    s--; g--;
    // wf
    for (int k=0; k<n; k++){
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                cost[i][j] = std::min(
                    cost[i][j], cost[i][k]+cost[k][j]);
            }
        }
    }
    printf("%d\n", v-p-cost[s][g]-cost[g][s]);
    return 0;
}
    