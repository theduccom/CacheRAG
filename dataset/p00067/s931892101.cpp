#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
using namespace std;

string f[15];
int dx[] = { 1,0,-1,0 }, dy[] = { 0,-1,0,1 };

void dfs(int x, int y) {
	f[x][y] = '0';
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (0 <= nx&&nx < 12 && 0 <= ny&&ny < 12) {
			if (f[nx][ny] == '1') {
				dfs(nx, ny);
			}
		}
	}
	return;
}

int main() {
	while (cin>>f[0]) {
		int ans = 0;
		for (int i = 1; i < 12; i++) {
			cin >> f[i];
		}
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				if (f[i][j] == '1') {
					ans++;
					dfs(i, j);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}