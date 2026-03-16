#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    double v;
    while(cin >> v) {
        for(int n=1; ; ++n) {
            double t = sqrt((5*n-5)/4.9);
            if(9.8*t > v) {
                cout << n << endl;
                break;
            }
        }
    }
}