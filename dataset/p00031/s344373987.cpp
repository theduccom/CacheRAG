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


signed main(){
    int n;
    while(cin >> n){
        vector<int> ans;
        rep(i, 0, 10){
            int t = 1 << i;
            if(n & t){
                ans. push_back(t);
            }
        }
        rep(i, 0, ans.size()){
            if(i != 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }
}