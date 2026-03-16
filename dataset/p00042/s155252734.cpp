#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int setID = 0;
	while (true) {
		int W, N;
		if(!(cin>>W>>N)) break;
		cout << "Case " << ++setID  << ':' << endl;
		vector<int> v(N), w(N);
		for (auto i = 0; i < N; i++)
			scanf("%d,%d", &v[i], &w[i]);
		vector<vector<int>> dp(N+1, vector<int>(W+1, 0));
		for (auto i = N-1; i >= 0; i--) {
			for (auto j = W; j >= 0; j--) {
				dp[i][j] = j < w[i]
					? dp[i+1][j]
					: max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
			}
		}
		int weight;
		for (weight = W; weight >= 0; weight--)
			if (dp[0][weight] != dp[0][W]) break;
		cout << dp[0][W] << endl << ++weight << endl;
	}
	return 0;
}