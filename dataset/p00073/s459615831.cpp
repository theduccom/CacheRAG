#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
 
int main() {
    int x, h;
    while(cin >> x >> h) {
        if(x == 0 && h == 0) break;
        double ans = 0.0;
        ans += (double)x * x;
        ans += 2.0 * x * sqrt(x * x / 4.0 + h * h);
        printf("%.6f\n",ans);
    }
    return 0;
}