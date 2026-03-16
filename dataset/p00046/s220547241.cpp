#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
 
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
 
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    vector<double> a;
    double x;
    while (~scanf("%lf", &x)){
        a.push_back(x);
    }
    double mi = 1e9, ma = 0;
    REP(i,a.size()){
        mi = fmin(mi, a[i]);
        ma = fmax(ma, a[i]);
    }
    cout << ma - mi << endl;

    return 0;
}