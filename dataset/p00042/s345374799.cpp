#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
// #define first first
// #define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;

int dp[1100][1100];

signed main(){
    int W;
    int cnt = 0;
    while(cin >> W, W){
        int n;
        cin >> n;
        cnt++;
        vector<int> v(n), w(n);
        rep(i, 0, n){
            char c;
            cin >> v[i] >> c >> w[i];
        }
        rep(i, 0, 1010){
            rep(j, 0, 1010){
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 0;
        rep(i, 0, n){
            rep(j, 0, W + 1){
                dp[i + 1][j] = dp[i][j];
                if(j - w[i] >= 0){
                    dp[i + 1][j] = max(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
                }
            }
        }
        int ans = -1, wt;
        rep(i, 0, W + 1){
            if(dp[n][i] > ans){
                ans = dp[n][i];
                wt = i;
            }
        }
        cout << "Case " << cnt << ":" << endl;
        o(ans);
        o(wt);
    }
}