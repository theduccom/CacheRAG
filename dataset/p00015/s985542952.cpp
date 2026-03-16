#include <iostream>
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) REP(i, 0, n)
using namespace std;
int a[81], b[81];
int main()
{
    int n; cin >> n;
    while (n--) {
        rep(i, 81) a[i] = b[i] = 0;
        string s, t;
        cin >> s >> t;
        rep(i, s.size()) a[i] = s[s.size()-i-1]-'0';
        rep(i, t.size()) b[i] = t[t.size()-i-1]-'0';

        int c = 0;
        rep(i, 81) {
            a[i] = a[i] + b[i] + c;
            if (a[i] >= 10) { a[i] -= 10; c = 1; }
            else c = 0;
        }
        if (a[80] != 0)
            cout << "overflow" << endl;
        else {
            int k = 80; while (k > 0 && a[k] == 0) k--;
            for (int i = k; i >= 0; --i) cout << a[i];
            cout << endl;
        }
    }
    return 0;
}