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
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;


int main() {
	int map[50][50] = { 0 };
	int a, b, c;
	char ch;
	while (cin >> a >> ch >> b >> ch >> c) {
		map[b][a]++;
		if (c == 1) {
			map[b + 1][a]++;
			map[b - 1][a]++;
			map[b][a + 1]++;
			map[b][a - 1]++;
		}
		else if (c == 2) {
			map[b - 1][a - 1]++;
			map[b - 1][a]++;
			map[b - 1][a + 1]++;
			map[b][a + 1]++;
			map[b + 1][a + 1]++;
			map[b + 1][a]++;
			map[b + 1][a - 1]++;
			map[b][a - 1]++;
		}
		else {
			map[b - 1][a - 1]++;
			map[b - 1][a]++;
			map[b - 1][a + 1]++;
			map[b][a + 1]++;
			map[b + 1][a + 1]++;
			map[b + 1][a]++;
			map[b + 1][a - 1]++;
			map[b][a - 1]++;
			map[b + 2][a]++;
			map[b - 2][a]++;
			map[b][a + 2]++;
			map[b][a - 2]++;
		}
	}
	int ans = 0, maxl = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (!map[i][j])ans++;
			maxl = max(maxl, map[i][j]);
		}
	}
	cout << ans << endl << maxl << endl;
}