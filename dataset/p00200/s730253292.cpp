#include <bits/stdc++.h>
#define INF 114514810
#define FOR(i, r, n) for(int i=(r); i<(n); i++) 
#define REP(i, n) FOR(i, (0), n)

using namespace std;

int n, a, b, c, d, t = 0, sum = INF, ans, nodes = 0, p, q, r, w;
int x[102][102], y[102][102];

int main(){
	while (true){
		cin >> n >> nodes;
		if (n == 0 && nodes == 0) break;
		REP(i, 101)
			REP(j, 101){
			x[i][j] = (i == j ? 0 : INF);
			y[i][j] = (i == j ? 0 : INF);
		}
		REP(i, n){
			cin >> a >> b >> c >> d;
			x[a-1][b-1] = x[b-1][a-1] = c;
			y[a-1][b-1] = y[b-1][a-1] = d;
		}
		REP(k, nodes)
			REP(i, nodes)
			REP(j, nodes){
			x[i][j] = min(x[i][j], x[i][k] + x[k][j]);
			y[i][j] = min(y[i][j], y[i][k] + y[k][j]);
		}
		cin >> w;
		REP(k, w){
			cin >> p >> q >> r;
			if (r) cout << y[p-1][q-1] << endl;
			else cout << x[p-1][q-1] << endl;
		}
	}
}