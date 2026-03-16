#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <cstring>

#define rep(a, b, c) for (int a = b; a < (c); a++)
#define repe(a, b, c) for (int a = b; a <= (c); a++)
#define repr(a, b, c) for (int a = b; a > (c); a--)
#define repre(a, b, c) for (int a = b; a >= (c); a--)

using namespace std;

int main() {
    vector<bool> is_prime(1000001, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; (i * i) <= 1000001; i += 2) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 1000001; j += i) {
                is_prime[j] = false;
            }
        }
        if (i == 2) i--;
    }
    while(true) {
        int N, X;
        cin >> N >> X;
        if ((N | X) == 0) break;
        bool dp[X];
        memset(dp, false, X + 1);
        dp[0] = true;
        int ans = 0;
        rep(i, 0, N) {
            int value;
            cin >> value;
            repe(j, 0, X - value) {
                if (dp[j]) {
                    dp[j + value] = true;
                    if (is_prime[j + value]) {
                        ans = max(ans, j + value);
                    }
                }
            }
        }
        if (ans == 0) {
            cout << "NA" << endl;
        } else {
            cout << ans << endl;
        }
    }
    return 0;
}