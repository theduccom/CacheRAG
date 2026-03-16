#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

string s1, s2;

string addString(string s, string t){
    if(s.size() < t.size()) swap(s, t);
    char tmp;
    for(int i = s.size() - 1, j = t.size() - 1; i >= 0; i--, j--){
        if(j >= 0) s[i] += t[j] - '0';
        if(s[i] > '9'){
            s[i] -= 10;
            if(i == 0) s = '1' + s;
            else s[i - 1]++;
        }
    }
    return s;
}

signed main(){
    int n;
    cin >> n;
    rep(i, 0, n){
        cin >> s1 >> s2;
        string ans = addString(s1, s2);
        if(ans.size() > 80) cout << "overflow" << endl;
        else cout << ans << endl;
    }
}