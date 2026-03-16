# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
# include <unordered_map>

using namespace std;
using LL = long long;

constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;

char maze[10][10];

void dfs(int hpos, int wpos) {
	maze[hpos][wpos] = '0';
	if (hpos - 3 >= 0 && maze[hpos - 3][wpos] == '1')dfs(hpos - 3, wpos);
	if (hpos - 2 >= 0 && maze[hpos - 2][wpos] == '1')dfs(hpos - 2, wpos);
	if (hpos - 1 >= 0 && maze[hpos - 1][wpos] == '1')dfs(hpos - 1, wpos);
	if (hpos + 1 < 8 && maze[hpos + 1][wpos] == '1')dfs(hpos + 1, wpos);
	if (hpos + 2 < 8 && maze[hpos + 2][wpos] == '1')dfs(hpos + 2, wpos);
	if (hpos + 3 < 8 && maze[hpos + 3][wpos] == '1')dfs(hpos + 3, wpos);
	if (wpos - 3 >= 0 && maze[hpos][wpos - 3] == '1')dfs(hpos, wpos - 3);
	if (wpos - 2 >= 0 && maze[hpos][wpos - 2] == '1')dfs(hpos, wpos - 2);
	if (wpos - 1 >= 0 && maze[hpos][wpos - 1] == '1')dfs(hpos, wpos - 1);
	if (wpos + 1 < 8 && maze[hpos][wpos + 1] == '1')dfs(hpos, wpos + 1);
	if (wpos + 2 < 8 && maze[hpos][wpos + 2] == '1')dfs(hpos, wpos + 2);
	if (wpos + 3 < 8 && maze[hpos][wpos + 3] == '1')dfs(hpos, wpos + 3);
}

int main() {
	int n;
	cin >> n;
	for (int o = 0; o < n; o++) {
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> maze[i][j];
			}
		}

		int x, y;
		cin >> y >> x;
		x--, y--;
		dfs(x, y);
		cout << "Data " << o + 1 << ":" << endl;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << maze[i][j];
			}
			cout << endl;
		}
	}
}