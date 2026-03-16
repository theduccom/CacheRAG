#include <bits/stdc++.h>

using namespace std;

#define MAX 1024

int main()
{
    int W, N, T = 1;
    while (cin >> W, W) {
        cin >> N;
        char c;
        vector<int> v(N), w(N);
        for (int i = 0; i < N; i++) {
            cin >> v[i] >> c >> w[i];
        }

        int dp[MAX] = {};
        for (int i = 0; i < N; i++) {
            for (int j = W; j >= w[i]; j--) {
                dp[j] = max(dp[j], dp[j-w[i]] + v[i]);
            }
        }
        
        int max_v = *max_element(dp, dp + W + 1), min_w = -1;
        for (int i = W; i >= 0; i--) {
            if (dp[i] == max_v) {
                min_w = i;
            }
        }        
        cout << "Case " << T++ << ":" << endl;
        cout << max_v << endl;
        cout << min_w << endl;
    }
    return 0;
}