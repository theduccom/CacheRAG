#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

const int N = 1e3L + 11;
int dp[N][N];

int main() {
	ios :: sync_with_stdio(0);

	int W, n;
	int _ = 0;
	while(cin >> W && W) {
		cin >> n;
		_ ++;
		memset(dp, 0, sizeof dp);
		for(int i = 1; i <= n; i ++) {
			int v, w; char c;
			cin >> v >> c >> w;
			for(int j = 0; j <= W; j ++)
				dp[i][j] = dp[i - 1][j];
			for(int j = w; j <= W; j ++)
				dp[i][j] = max(dp[i][j], dp[i - 1][j - w] + v);
		}
		cout << "Case " << _ << ":\n";
		cout << *max_element(dp[n], dp[n] + W + 1) << '\n';
		cout << max_element(dp[n], dp[n] + W + 1) - dp[n] << '\n';
	}

	return 0;
}