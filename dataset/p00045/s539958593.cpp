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

int main() {
    long sum = 0;
    int cnt = 0;
    int pcs = 0;
    int val, p;
    char c;
    while(cin >> val >> c >> p) {
        sum += val * p;
        cnt++;
        pcs += p;
    }
    cout << sum << endl;
    cout << round((double) pcs / cnt) << endl;
    return 0;
}