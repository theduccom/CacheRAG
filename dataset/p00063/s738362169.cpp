#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back

int main() {
    string s;
    int ans = 0;
    while(cin >> s) {
        int n = s.size();
        bool f=0;
        rep(i,n) {
            if(s[i] != s[n-1-i]) f = 1;
        }
        if(!f) ans++;
    }
    cout << ans << "\n";
    
    return 0;
}