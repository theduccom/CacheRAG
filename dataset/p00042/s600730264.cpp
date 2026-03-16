#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 1 << 29;

int main() {
    int W, N, v[1000], w[1000];

    int n_case = 0;
    while (true) {
        ++n_case;
        cin >> W;
        if (W == 0) break;
        cin >> N;
        char ch;
        for (int j = 0; j < N; ++j) {
            cin >> v[j] >> ch >> w[j];
        }

        int dp[1001];
        fill(dp, dp+W+1, -INF);
        dp[0] = 0;

        for (int j = 0; j < N; ++j) {
            for (int k = W; k >= w[j]; --k) {
                if (dp[k - w[j]] != -INF) {
                    dp[k] = max(dp[k], dp[k - w[j]] + v[j]);
                }
            }
        }

        int max_v = -INF, ww;
        for (int j = 0; j <= W; ++j) {
            if (max_v < dp[j]) {
                max_v = dp[j];
                ww = j;
            }
        }
        cout << "Case " << n_case << ":" << endl;
        cout << max_v << endl;
        cout << ww << endl;
    }

    return 0;
}