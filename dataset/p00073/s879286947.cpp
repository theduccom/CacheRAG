#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

void solve73(int x, int h) {
    double hypo = sqrt(h*h + x*x/4.0);
    printf("%.6f\n", hypo*x*2 + x*x);
}

int main() {
    int x,h;
    while(cin >> x >> h, x + h) {
        solve73(x,h);
    }
    return 0;
}