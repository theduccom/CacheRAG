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

vector<double> seq;

void solve55(double a) {
    seq.clear();
    seq.push_back(a);
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 1) {
            seq.push_back(seq.back() * 2);
        }else {
            seq.push_back(seq.back() / 3);
        }
    }
    double sum = 0;
    REP(i,10) {
        sum += seq[i];
    }
    printf("%.6f\n", sum);
}

int main() {
    double a;
    while(cin >> a) {
        solve55(a);
    }
    return 0;
}