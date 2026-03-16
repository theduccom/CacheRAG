#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int g[8][8];
int dx[]{ 1,-1,0,0 }, dy[]{ 0,0,1,-1 };
void dfs(int x, int y) {
	g[x][y] = 0;
	rep(i, 4) {
		int nx = x, ny = y;
		rep(j, 3) {
			nx += dx[i]; ny += dy[i];
			if (0 <= nx&&nx < 8 && 0 <= ny&&ny < 8 && g[nx][ny])
				dfs(nx, ny);
		}
	}
}
int main() {
	string buf;
	int n; cin >> n;
	rep(t, n) {
		rep(i, 8)rep(j, 8)scanf("%1d", &g[j][i]);
		int x, y; cin >> x >> y; x--; y--;
		dfs(x, y);
		printf("Data %d:\n", t + 1);
		rep(i, 8) {
			rep(j, 8)printf("%d", g[j][i]);
			printf("\n");
		}
	}
}