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

bool isleap(int year) {
    return year%4==0 && (year%100!=0 || year%400==0);
}

void solve93(int a, int b) {
    int cnt = 0;
    FOR(i,a,b+1) {
        if (isleap(i)) cout << i << endl, cnt++;
    }
    if (cnt == 0) cout << "NA" << endl;
}

int main() {
    int a, b;
    bool start = true;
    while(cin >> a >> b, a+b) {
        if (!start) cout << endl;
        solve93(a, b);
        start = false;
    }
    return 0;
}