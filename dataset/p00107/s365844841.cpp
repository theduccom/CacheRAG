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
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

void solve107(int d, int w, int h) {
    int n;
    cin >> n;
    int r;
    vector<int> v;
    v.push_back(d);
    v.push_back(w);
    v.push_back(h);
    sort(ALL(v));
    double lim = v[0]*v[0]/4.0 + v[1]*v[1]/4.0;
    REP(i,n) {
        cin >> r;
        if (lim < r*r) cout << "OK" << endl;
        else cout << "NA" << endl;
    }
}

int main() {
    int d, w, h;
    while (cin >> d >> w >> h, d + w + h) {
        solve107(d, w, h);
    }
    return 0;
}