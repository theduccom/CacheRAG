#include<bits/stdc++.h>
using namespace std;
using ll = int64_t;
using ld = long double;
int main(){
    while(1){
        ld x, h;
        cin >> x >> h;
        if(!x && !h) break;
        ld po = sqrt(pow(h, 2) + pow(x / 2, 2));
        printf("%.100Lf\n", x * po * 2 + x * x);
    }
    return 0;
}
