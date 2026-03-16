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

void solve77(string s) {
    REP(i,s.size()) {
        if (s[i] != '@') cout << s[i];
        else {
            REP(j,s[i+1]-'0') cout << s[i+2];
            i+=2;
        }
    }
    cout << endl;
}

int main() {
    string s;
    while (cin >> s) {
        solve77(s);
    }
    return 0;
}