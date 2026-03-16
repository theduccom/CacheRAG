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

double getDistance(double xa, double ya, double xb, double yb) {
    return sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double dist = getDistance(xa, ya, xb, yb);
        if (dist > ra + rb) cout << 0 << endl;
        else if (abs(ra - rb) <= dist) cout << 1 << endl;
        else if (ra > rb) cout << 2 << endl;
        else cout << -2 << endl;
    }
    return 0;
}