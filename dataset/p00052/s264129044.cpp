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

int getfives(int i) {
    int five = 5;
    int ans = 0;
    while(i / five) {
        ans += i / five;
        five *= 5;
    }
    return ans;
}

void solve52(int i) {
    int fives = getfives(i);
    cout << fives << endl;
}

int main() {
    int n;
    while(cin >> n, n) {
        solve52(n);
    }
    return 0;
}