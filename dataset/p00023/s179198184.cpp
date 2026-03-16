#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    int n;
    cin >> n;
    rep(i, 0, n){
        int ans;
        double x[2], y[2], r[2];
        rep(j, 0, 2) cin >> x[j] >> y[j] >> r[j];
        double d = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));
        if(r[0] + r[1] < d) ans = 0;
        else if(r[0] > d + r[1]) ans = 2;
        else if(r[1] > d + r[0]) ans = -2;
        else  ans = 1;        
        cout << ans << endl;
    }
}