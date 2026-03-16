#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9;
int d[128][128], t[128][128];

int main() {
	int n, m, q, a, b, cst, tie, r;
	while(cin >> n >> m && (n || m)){
		for(int i = 0; i < m; ++i){
			for(int j = 0; j < m; ++j){
				d[i][j] = INF;
				t[i][j] = INF;
			}
		}
		for(int i = 0; i < n; ++i){
			scanf("%d%d%d%d", &a, &b, &cst, &tie);
			a--; b--;
			d[a][b] = cst; d[b][a] = cst;
			t[a][b] = tie; t[b][a] = tie;
		}
		for(int k = 0; k < m; ++k){
			for(int i = 0; i < m; ++i){
				for(int j = 0; j < m; ++j){
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
					t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
				}
			}
		}
		cin >> q;
		for(int i = 0; i < q; ++i){
			scanf("%d%d%d", &a, &b, &r);
			a--; b--;
			if(r == 0){
				printf("%d\n", d[a][b]);
			}
			else{
				printf("%d\n", t[a][b]);
			}
		}
	}
	return 0;
}