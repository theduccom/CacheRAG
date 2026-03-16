#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define itrep(it, a) for(it = (a).begin(); it != (a).end(); it++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

int main(){
    int n,m;
    while(cin >> n >> m, n||m){
        int a[1005], ans = 0;
        rep(i,n) cin >> a[i];
        sort(a, a + n, greater<int>());
        rep(i,n){
            if(i % m != m - 1) ans+=a[i];
        }
        cout << ans << endl;
    }
}