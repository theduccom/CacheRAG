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
constexpr int MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
using namespace std;

int main() {
	int n;
	while (cin >> n&&n) {
		int g[15][15];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> g[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				sum += g[i][j];
			}
			g[i][n] = sum;
		}
		for (int j = 0; j < n; j++) {
			int sum = 0;
			for (int i = 0; i < n; i++) {
				sum += g[i][j];
			}
			g[n][j] = sum;
		}
		int ssum = 0;
		for (int i = 0; i < n; i++) {
			ssum += g[i][n];
		}
		g[n][n] = ssum;
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				if (g[i][j] < 10)cout << "    " << g[i][j];
				else if (g[i][j] < 100)cout << "   " << g[i][j];
				else if (g[i][j] < 1000)cout << "  " << g[i][j];
				else if (g[i][j] < 10000)cout << " " << g[i][j];
				else cout << g[i][j];
			}
			cout << endl;
		}
	}
}