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
    double highest = -1e9;
    double lowest = 1e9;
    double h;
    while(cin >> h) {
        highest = max(highest, h);
        lowest = min(lowest, h);
    }
    printf("%.3f\n", highest- lowest);
    return 0;
}