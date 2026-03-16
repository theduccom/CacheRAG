#include <iostream>
#include <cstdio>
#include <cstring>

#define MAX(A, B) (A) > (B) ? (A) : (B)

using namespace std;

int dp[1001][1001];
int w[1000], v[1000];

int main() {
	int N, W;
	int c = 0;
	memset(dp, 0, sizeof dp);
	while (cin >> W, W) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			scanf("%d,%d", &v[i], &w[i]);
		}
		for (int i = 0; i < N; i++) {
			for (int j = W; j >= 0; j--) {
				if (j >= w[i])
					dp[i+1][j] = MAX(dp[i][j], dp[i][j-w[i]]+v[i]);
				else
					dp[i+1][j] = dp[i][j];
			}
		}
		while (dp[N][W] == dp[N][W - 1]) W--;
		cout << "Case " << ++c << ':' << endl;
		cout << dp[N][W] << endl << W << endl;
	}

	return 0;
}