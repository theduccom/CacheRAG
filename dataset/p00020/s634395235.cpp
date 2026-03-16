#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

signed main(){
    string s;
    getline(cin, s);
    rep(i, 0, s.size()){
        if('a' <= s[i] && s[i] <= 'z'){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    cout << s << endl;
}