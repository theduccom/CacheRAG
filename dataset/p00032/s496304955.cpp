#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
// #define int long long
#define first first
#define second se
using namespace std;
typedef pair<int, int> P;
typedef vector<int> vi;

signed main(){
    int t = 0, h = 0;
    int a, b, c;
    while(1){
       if(scanf("%d,%d,%d", &a, &b, &c) == EOF) break;
        // cout << a << b << c << endl;
        if(a * a + b * b == c * c) t++;
        else if(a == b) h++;
    }
    o(t);
    o(h);
}