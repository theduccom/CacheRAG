#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int getFloorNum(double h) {
    return ceil(h / 5.0) + 1;
}

int main() {
    double v;
    while(cin >> v) {
        double h = v*v/19.6;
        cout << getFloorNum(h) << endl;
    }
    return 0;
}