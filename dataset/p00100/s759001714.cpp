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

typedef pair<int,long> P;

void solve100(int n) {
    
    vector<P> v(4001, make_pair(0,0));
    long o, p, q;
    int cnt = 1;
    REP(i,n) {
        cin >> o >> p >> q;
        if (v[o].first != 0) {
            v[o].second += p * q;
        }else {
            v[o].first = cnt;
            cnt++;
            v[o].second += p * q;
        }
    }
    vector<P> w;
    REP(i,4001) {
        if (v[i].second >= 1000000) w.push_back(make_pair(v[i].first, i));
    }
    sort(ALL(w));
    if (w.size()) {
        REP(i,w.size()) cout << w[i].second << endl;
    }else {
        cout << "NA" << endl;
    }
}

int main() {
    int n;
    while(cin >> n, n) {
        solve100(n);
    }
    return 0;
}