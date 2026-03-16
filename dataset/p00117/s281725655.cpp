#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 100000000;
const int MAX_N = 20;
int dis[MAX_N + 1][MAX_N + 1];
int main() {
	for (int i = 0; i < MAX_N + 1; i++) {
		for (int j = 0; j < MAX_N + 1; j++) {
			dis[i][j] = INF;
		}
	}
	int n, m;
	scanf("%d",&n);
  	scanf("%d",&m);
	for (int i = 0; i < m; i++) {
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		dis[a][b] = c;
		dis[b][a] = d;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
			}
		}
	}
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	int ans = y1 - y2 - dis[x1][x2] - dis[x2][x1];
	cout << ans << endl;
}

