#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;
 
typedef ostringstream OSS;
typedef istringstream ISS;
 
typedef vector<int> VI;
typedef vector< VI > VVI;
 
typedef long long LL;
 
typedef pair<int, int> PII;
typedef vector<PII> VPII;
 
#define X first
#define Y second
 
int main(void) {
	int dataset_index = 1;

	int W, N;
	while (cin >> W >> N, W) {
		VI ps(N), ws(N);

		char dummy;
		for (int i = 0; i < N; i++) {
			cin >> ps[i] >> dummy >> ws[i];
		}

		VVI dp(N + 1, VI(W + 1, -1));
		dp[0][0] = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < W + 1; j++) {
				if (dp[i][j] == -1) continue;
				
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);

				int w = j + ws[i];
				int p = dp[i][j] + ps[i];
				if (w <= W) {
					dp[i + 1][w] = max(dp[i + 1][w], p);
				}
			}
		}

		int ans_p = 0, ans_w = 0;

		for (int i = 0; i < W + 1; i++) {
			if (dp[N][i] > ans_p) {
				ans_p = dp[N][i];
				ans_w = i;
			}
		}

		cout << "Case " << dataset_index << ":" << endl;
		cout << ans_p << endl << ans_w << endl;

		++dataset_index;
	}
}