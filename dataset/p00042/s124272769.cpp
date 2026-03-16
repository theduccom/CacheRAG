#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

#define rep(a, b, c) for (int a = b; a < (c); a++)
#define repe(a, b, c) for (int a = b; a <= (c); a++)
#define repr(a, b, c) for (int a = b; a > (c); a--)
#define repre(a, b, c) for (int a = b; a >= (c); a--)

using namespace std;

int main() {
    for (int c = 1; ; c++) {
        int W, N;
        cin >> W;
        if (W == 0) break;
        cin >> N;
        vector< vector<int> > dp(N + 1, vector<int>(W + 1, 0));
        int v, w;
        char ch;
        rep(i, 0, N) {
            cin >> v >> ch >> w;
            repe(j, 0, W) {
                if (j >= w)
                    dp[i + 1][j] = max(dp[i][j], dp[i][j - w] + v);
                else
                    dp[i + 1][j] = dp[i][j];
            }
        }
        int ans_w = 0, ans_v = 0;
        repre(i, W, 0) {
            if (ans_v <= dp[N][i]) {
                ans_w = i;
                ans_v = dp[N][i];
            }
        }
        cout << "Case " << c << ":" << endl;
        cout << ans_v << endl;
        cout << ans_w << endl;
    }
    return 0;
}