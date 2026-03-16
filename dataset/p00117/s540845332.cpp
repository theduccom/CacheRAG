#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define INF (1<<29)

int main() {
	int n, m;
	int dis[20][20];
	
	cin >> n >> m;
	
	fill(dis[0], dis[20], INF);
	REP(i, n) dis[i][i] = 0;
	REP(i, m) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--; b--;
		dis[a][b] = c;
		dis[b][a] = d;
	}
	
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	x1--; x2--;
	
	REP(k, n) REP(i, n) REP(j, n) {
		dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
	}
	
	int ans = y1 - y2 - (dis[x1][x2] + dis[x2][x1]);
	cout << ans << endl;
	
	return 0;
}