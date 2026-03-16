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

int dp[1100];

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
            dp[i] = 0;
        }
        rep(i, 0, n){
            repb(j, W, 0){
                if(j + w[i] <= W){
                    dp[j + w[i]] = max(dp[j] + v[i], dp[j + w[i]]);
                }
            }
        }
        int ans = -1, wt;
        rep(i, 0, W + 1){
            if(dp[i] > ans){
                ans = dp[i];
                wt = i;
            }
        }
        cout << "Case " << cnt << ":" << endl;
        o(ans);
        o(wt);
    }
}