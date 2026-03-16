#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for(int i=a; i<n; i++)
#define repr(i,a,n) for(int i=a; i>=n; i--)

int main() {
    string s;
    int a[51];
    while(cin >> s) {
        memset(a, -1, sizeof(a));
        repr(i,s.length() - 1,0) {
            if(s[i] == 'I') a[i] = 1;
            else if(s[i] == 'V') a[i] = 5;
            else if(s[i] == 'X') a[i] = 10;
            else if(s[i] == 'L') a[i] = 50;
            else if(s[i] == 'C') a[i] = 100;
            else if(s[i] == 'D') a[i] = 500;
            else if(s[i] == 'M') a[i] = 1000;
        }

        int prev = -1, ret = 0;
        repr(i,s.length() - 1,0) {
            if(a[i] >= prev) {
                prev = a[i];
                ret += a[i];
            }
            else {
                ret -= a[i];
            }
        }

        cout << ret << endl;
    }
    return 0;
}