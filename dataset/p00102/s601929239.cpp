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

void solve102(int n) {
    vector<int> v(n,0);
    vector<int> w(n,0);
    int k;
    REP(i,n) {
        REP(j,n) {
            cin >> k;
            printf("%5d", k);
            v[i] += k;
            w[j] += k;
        }
        printf("%5d\n", v[i]);
    }
    REP(i,n) {
        printf("%5d", w[i]);
    }
    printf("%5d\n", accumulate(ALL(v), 0));
}

int main() {
    int n;
    while(cin >> n, n) {
        solve102(n);
    }
    return 0;
}