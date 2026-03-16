#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int dp[1010][1010];

int main() {
	int w;
	int x = 1;
	while (cin >> w, w) {
		int n;
		cin >> n;
		int v[1005], m[1005];
		for (int i = 0;i < n;i++) {	scanf("%d,%d", &v[i], &m[i]);}

		for (int j = 0;j <= w;j++)dp[n][j] = 0;


		for (int i = n-1;i >=0;i--) {
			for (int j = 0;j <= w;j++) {
				if (j < m[i])dp[i][j] = dp[i + 1][j];
				else dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - m[i]]+v[i]);
			}
		}

		int k=0, aw=0;
		for (int i = 0;i <= w;i++) {
			if (dp[0][i] > k) {
				k = dp[0][i];
				aw = i;
			}
		}
		cout << "Case " << x << ":" << endl;
		cout << k << endl << aw << endl;
		x++;
	}
	return 0;
}