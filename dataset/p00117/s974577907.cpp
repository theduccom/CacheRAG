#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = (1 << 20);

int main(){
    int n, m, x1, x2, y1, y2;
    int G[25][25];
    for(int i = 1; i <= 20; i++){
        for(int j = 1; j <= 20; j++){
            if( i == j ) G[i][j] = 0;
            else G[i][j] = INF;
        }
    }
    scanf("%d\n%d", &n, &m);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            G[i][j] = INF;
            if( i == j ) G[i][j] = 0;
        }
    }
    while( m-- > 0 ){
        int a, b, c, d;
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        G[a][b] = c;
        G[b][a] = d;
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                G[i][j] = min( G[i][j], G[i][k] + G[k][j] );
            }
        }
    }
    scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
    printf("%d\n", y1 - y2 - G[x1][x2] - G[x2][x1]);
    return 0;
}