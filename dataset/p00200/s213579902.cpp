#include<stack>
#include<queue>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
static const int INFTY = (1 << 21);
int main(){
	int n, m, a, b, cost, time;
	int kk, p, q, r;
	int sta_c[101][101];
	int sta_t[101][101];
	while (cin >> n >> m, n, m){
		for (int i = 0; i < 101; i++){
			for (int j = 0; j < 101; j++){
				sta_c[i][j] = sta_t[i][j] = INFTY;
			}
		}
		for (int i = 0; i < n; i++){
			cin >> a >> b >> cost >> time;
			sta_c[a][b] = cost; sta_c[b][a] = cost;
			sta_t[a][b] = time; sta_t[b][a] = time;
		}
		for (int k = 1; k <= m; k++){
			for (int i = 1; i <= m; i++){
				if (sta_c[i][k] == INFTY) continue;
				for (int j = 1; j <= m; j++){
					if (sta_c[k][j] == INFTY) continue;
					sta_c[i][j] = min(sta_c[i][j], sta_c[i][k] + sta_c[k][j]);
					sta_t[i][j] = min(sta_t[i][j], sta_t[i][k] + sta_t[k][j]);
				}
			}
		}
		cin >> kk;
		for (int i = 0; i < kk; i++){
			cin >> p >> q >> r;
			if (r == 0) cout << sta_c[p][q] << endl;
			else cout << sta_t[p][q] << endl;
		}
	}
	return 0;
}