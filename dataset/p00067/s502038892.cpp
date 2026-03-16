# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <tuple>
# include <functional>
# include <utility>
# define INF 1000000000
# define MOD 1000000000+7
using namespace std;

char islands[15][15];
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 };

void dfs(int h, int w) {
	islands[h][w] = '0';
	for (int i = 0; i < 4; i++) {
		if (h + dx[i] >= 0 && h + dx[i] <= 12 && w + dy[i] >= 0 && w + dy[i] <= 12 && islands[h + dx[i]][w + dy[i]] == '1') {
			dfs(h + dx[i], w + dy[i]);
		}
	}
}
int main() {
	string a;
	while (cin>>a) {
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				islands[i][j] = a[j];
			}
			if(i!=11)cin >> a;
		}
		int ans = 0;
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				if (islands[i][j] == '1')dfs(i, j), ans++;
			}
		}
		cout << ans << endl;
	}
}