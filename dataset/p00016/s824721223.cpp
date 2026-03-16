#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;
typedef pair<int, int> P;

const double PI = 3.1415926535;

signed main(){
    double x = 0, y = 0;
    int d, a, next = 90;
    while(1){
        char c;
        cin >> d >> c >> a;
        if(d == 0 && a == 0) break;
        x += (double)d * cos(next * PI / 180.0);
        y += (double)d * sin(next * PI / 180.0);
        next -= a;
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
}