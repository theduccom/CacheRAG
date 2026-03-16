#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n;
    while(cin >> n && n) {
        int ans = 0;
        for(int i=1; i<=n; ++i) {
            int tmp = i;
            while(tmp%5 == 0) {
                ans++;
                tmp /= 5;
            }
        }
        cout << ans << endl;
    }
}