#include <iostream>
#include <utility>
#include <algorithm>
#include <cstdio>

#define N_MAX 1000	// ??????????????° ?????§???
#define W_MAX 1000  // ?¢¨?????????????????????????????? ?????§???

using namespace std;

int dp[N_MAX+1][W_MAX+1];
int v[N_MAX+1], w[N_MAX+1];
int N, W;

pair<int, int> knapsack() {
	int ans_w, ans_v;

	// ?????????
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= W; j++) {
			dp[i][j] = 0;
		}
	}

	// ????????¨???
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i] <= j) {
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	// ???????§£?????¢???
	ans_v = -1;
	ans_w = 0;
	for (int i = W; i >= 1; i--) {
		if (ans_v <= dp[N][i]) {
			ans_v = dp[N][i];
			ans_w = i;
		}
	}

	return make_pair(ans_v, ans_w);
}

int main() {
	int cont = 1;
	char c;
	pair<int, int> ans;

	while (cin >> W) {
		if (W == 0)  break;

		cin >> N;

		for (int i = 1; i <= N; i++) {
			cin >> v[i] >> c >> w[i];
		}

		ans = knapsack();

		printf("Case %d:\n%d\n%d\n", cont, ans.first, ans.second);
		
		cont++;
	}

	return 0;
}