#include <iostream>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;

int main() {
    string s;
    int ans = 0;
    while(cin >> s) {
        bool isans = true;
        rep(i,0,s.length() / 2 + 1) {
            if(s[i] != s[s.length() - 1 - i]) isans = false;
        }
        if(isans) ans++;
    }
    cout << ans << endl;
}