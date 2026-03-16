#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

void solve51() {
    vector<int> v;
    REP(i,8) {
        char c;
        cin >> c;
        v.push_back(c - '0');
    }
    sort(ALL(v));
    vector<int> w(v);
    reverse(ALL(w));
    int s = 0;
    int od = 10000000;
    REP(i,8) {
        s += (w[i] - v[i]) * od;
        od /= 10;
    }
    cout << s << endl;
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        solve51();
    }
    return 0;
}