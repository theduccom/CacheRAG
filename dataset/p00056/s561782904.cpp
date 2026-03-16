#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

bool prs[50000];

bool pr(int n) {
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve56(int n) {
    if (n % 2) {
        if (prs[n-2]) cout << 1 << endl;
        else cout << 0 << endl;
    }else if (n == 4) {
        cout << 1 << endl;
    }else {
        int cnt = 0;
        for(int i = 3; i <= n / 2; i+=2) {
            if (prs[i] && prs[n-i]) cnt++;
        }
        cout << cnt << endl;
    }
}

int main() {
    for (int i = 3; i < 50000; i+=2) {
        if (pr(i)) prs[i] = true;
    }
    int n;
    while(cin >> n, n) {
        solve56(n);
    }
    return 0;
}