#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
#define INF 1e+8
int main() {
	int n,m;
	while(scanf("%d%d",&n,&m),(n|m)) {
		int d[101][101][2];
		for(int i = 0; i < 101; i++) {
			for(int j = 0; j < 101; j++) {
				d[i][j][0] = INF;
				d[i][j][1] = INF;
			}
		}
		for(int i = 0; i < n; i++) {
			int a,b,cost,time;
			scanf("%d%d%d%d",&a,&b,&cost,&time);
			a--;b--;
			d[a][b][0] = cost;
			d[b][a][0] = cost;
			d[a][b][1] = time;
			d[b][a][1] = time;
		}
		for(int k = 0; k < m; k++) {
			for(int i = 0; i < m; i++) {
				for(int j = 0; j < m; j++) {
					for(int l = 0; l < 2; l++) {
						d[i][j][l] = min(d[i][j][l],d[i][k][l] + d[k][j][l]);		
						d[j][i][l] = min(d[j][i][l],d[j][k][l] + d[k][i][l]);		
					}
				}
			}
		}
		int k;
		scanf("%d",&k);
		for(int i = 0; i < k; i++) {
			int p,q,r;
			scanf("%d%d%d",&p,&q,&r);
			p--;q--;
			printf("%d\n",d[p][q][r]);
		}
	}
	return 0;
}