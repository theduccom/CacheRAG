#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back

int s_to_i(string s) {
    int n;
    istringstream is(s);
    is >> n;
    return n;
}

int main() {
    int n; cin >> n;
    rep(YJSNPI, n) {
        string s, t;
        cin >> s;
        t = s;
        sort(s.begin(), s.end());
        sort(t.rbegin(), t.rend());
        int a = s_to_i(s);
        int b = s_to_i(t);
        cout << b - a << "\n";
    }
    
    return 0;
}