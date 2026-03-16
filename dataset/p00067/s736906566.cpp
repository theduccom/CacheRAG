#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; ++i)
#define TMP 12

using namespace std;

int ans;
char land[TMP][TMP];

void dfs(int x, int y) {
	if(land[x][y] == '1'){
		land[x][y] = '0';
		if(land[x + 1][y] == '1' && x + 1 < TMP && x >= 0) dfs(x + 1, y);
		if(land[x - 1][y] == '1' && x - 1 >= 0 && x < TMP) dfs(x - 1, y);
		if(land[x][y + 1] == '1' && y + 1 < TMP && y >= 0) dfs(x, y + 1);
		if(land[x][y - 1] == '1' && y - 1 >= 0 && y < TMP) dfs(x, y - 1);
	}
	return ;
}

int main() {
	while(cin >> land[0][0]){
		ans = 0;
		rep(i, TMP) {
			rep(j, TMP) {
				if(i == 0 && j == 0) continue;
				cin >> land[i][j];
			}
		}
		rep(i, TMP){
			rep(j, TMP) {
				if(land[i][j] == '1') {
					dfs(i, j);
					++ans;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}