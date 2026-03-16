#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n;
    double x[2], y[2], r[2];
    cin >> n;
    rep(data, n) {
        rep(i, 2) cin >> x[i] >> y[i] >> r[i];
        double dist = sqrt(pow(y[1]-y[0], 2.0) + pow(x[1]-x[0], 2.0));

        if(r[0] > r[1] && dist < r[0]-r[1]) cout << 2 << endl;
        else if(r[1] > r[0] && dist < r[1]-r[0]) cout << -2 << endl;
        else if(dist > r[0] + r[1]) cout << 0 << endl;
        else cout << 1 << endl;
    }
}