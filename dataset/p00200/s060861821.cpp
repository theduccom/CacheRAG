#include <cstdio>
#include <algorithm>
using namespace std;
#define INF 100000000

int n,m,k,p,q,r;
int d[2][100][100];

int main(){
	while(scanf("%d%d", &n, &m)){
		if(n == 0 && m == 0) break;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 100; j++){
				for(int k = 0; k < 100; k++) d[i][j][k] = INF;
			}
		}
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 100; j++) d[i][j][j] = 0;
		}
			
		for(int i = 0; i < n; i++){
			int a,b,c[2];
			scanf("%d%d%d%d", &a, &b, &c[0], &c[1]);
			a--; b--;
			for(int j = 0; j < 2; j++){
				d[j][a][b] = c[j];
				d[j][b][a] = c[j];
			}
		}
		for(int u = 0; u < 2; u++){
			for(int k = 0; k < m; k++){
				for(int i = 0; i < m; i++){
					for(int j = 0; j < m; j++){
						d[u][i][j] = min(d[u][i][j],d[u][i][k]+d[u][k][j]);
					}
				}
			}
		}
		scanf("%d", &k);
		for(int i = 0; i < k; i++){
			scanf("%d%d%d", &p, &q, &r);
			p--; q--;
			printf("%d\n", d[r][p][q]); 
		}
	}
}