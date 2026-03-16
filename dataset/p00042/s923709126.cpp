#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define int long long
using namespace std;
int a[1234], b[1234], dp[1234][1234];
signed main() {
	int w, n, l = 1;
	while (cin >> w, w) {
		cin >> n;
		for (int j = 1; j <= n; j++) {
			string s; cin >> s;
			int pw = 0;
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == ',') {
					a[j] = pw; pw = 0;
				}
				else {
					pw *= 10; pw += s[i] - '0';
				}
			}
			b[j] = pw;
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= w; j++) {
				dp[i][j] = -1;
			}
		}
		dp[0][0] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= w; j++)dp[i][j] = dp[i - 1][j];
			for (int j = 0; j + b[i] <= w; j++) {
				if (dp[i-1][j] >= 0) {
					dp[i][j + b[i]] = max(dp[i][j + b[i]], dp[i - 1][j] + a[i]);
				}
			}
		}
		int ans1 = 0, ans2 = 0;
		for (int i = 0; i <= w; i++) {
			if (ans1 < dp[n][i]) {
				ans1 = dp[n][i];
				ans2 = i;
			}
		}
		cout << "Case " << l << ":\n";
		cout << ans1 << endl << ans2 << endl;
		l++;
	}
}
