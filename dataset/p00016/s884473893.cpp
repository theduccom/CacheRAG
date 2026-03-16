#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

int main() {
    int r, t;
    int crtt = 90;
    double crtx = 0, crty = 0;
    while(1) {
        scanf("%d,%d", &r, &t);
        if (r == 0 && t == 0) break;
        crtx += cos(crtt * acos(-1) / 180) * r;
        crty += sin(crtt * acos(-1) / 180) * r;
        crtt -= t;
    }
    printf("%d\n%d\n", (int)crtx, (int)crty);
    return 0;
}