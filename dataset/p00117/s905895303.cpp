#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define INF (1<<29)

int main() {
	int n, m, s, g, V, P;
	int mincost[20][20];
	
	cin >> n >> m;
	
	REP(i, n) REP(j, n) {
		if (i == j) mincost[i][j] = 0;
		else mincost[i][j] = INF;
	}
	
	REP(i, m) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		a--; b--;
		mincost[a][b] = c;
		mincost[b][a] = d;
	}
	
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);
	s--; g--;
	
	REP(k, n) REP(i, n) REP(j, n) {
		if (mincost[i][j] > mincost[i][k] + mincost[k][j])
			mincost[i][j] = mincost[i][k] + mincost[k][j];
	}
	
	cout << V - P - mincost[s][g] - mincost[g][s] << endl;
	return 0;
}