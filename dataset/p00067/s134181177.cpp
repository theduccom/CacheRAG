#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<int, int>P;

int dx[] = { 1,-1,0,0 }, dy[] = { 0,0,1,-1 };
int c[15][15];
void dfs(int x, int y) {
	c[x][y] = 0;
	rep(i, 4) {
		int nx = x + dx[i], ny = y + dy[i];
		if (0 <= nx&&nx < 12 && 0 <= ny&&ny < 12 && c[nx][ny])
			dfs(nx, ny);
	}
}
int main() {
	while (1) {
		rep(i, 12)rep(j, 12) {
			if(!~scanf("%1d", &c[i][j]))return 0;
		}
		int cnt = 0;
		rep(i, 12) {
			rep(j, 12) {
				if (c[i][j]) {
					dfs(i, j); cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}