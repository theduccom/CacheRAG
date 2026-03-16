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

int main() {
	int n, m;
	while (cin >> n >> m&&n&&m) {
		vector<int> v;
		int a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			v.emplace_back(a);
		}
		sort(v.begin(), v.end(), greater<int>());
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if ((i + 1) % m != 0)ans += v[i];
		}
		cout << ans << endl;
	}
}