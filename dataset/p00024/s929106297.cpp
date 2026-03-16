#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
#define loop(i,a,b) for(ll i=(a); i<ll(b); i++)
#define rep(i,b) loop(i,0,b)

int f(double V){
    rep(i,100000000){
        double y = 5 * i - 5;
        double t = sqrt(y / 4.9);
        double v = 9.8*t;
        if (v >= V) return i;
    }
    return -1;
}

int main(){
    double v;
    while (cin >> v){
        cout << f(v) << endl;
    }
}