#include <vector>
#include <cstdio>

using namespace std;

#define M 100
#define INF 10e6

#define MIN(X,Y) ((X)<(Y)?(X):(Y))

int main(void){
    int n,m, qNum;
    int cost[M][M], tm[M][M];
    
    while (scanf("%d%d", &n,&m), n){
        // reset table
        for (int i=0; i<m; i++){
            for (int j=0; j<m; j++){
                cost[i][j] = tm[i][j] = INF;
            }
        }
        // read data
        for (int i=0; i<n; i++){
            int s,d,c,t;
            scanf("%d%d%d%d", &s, &d, &c, &t);
            s--; d--;
            cost[s][d] = cost[d][s] = c;
            tm[s][d] = tm[d][s] = t;
        }
        // warshall-floyd
        for (int k=0; k<m; k++){
            for (int i=0; i<m; i++){
                for (int j=0; j<m; j++){
                    cost[i][j] = MIN(cost[i][j],cost[i][k]+cost[k][j]);
                    tm[i][j] = MIN(tm[i][j],tm[i][k]+tm[k][j]);                    
                }
            }
        }
        scanf("%d", &qNum);
        for (int i=0; i<qNum; i++){
            int s, d, type;
            scanf("%d%d%d", &s, &d, &type);
            s--; d--;
            printf("%d\n", type==0?cost[s][d]:tm[s][d]);
        }
    }
    
    return 0;
}