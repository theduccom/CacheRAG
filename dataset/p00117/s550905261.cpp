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

const int INF = 1e5;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> cost = vector<vector<int>>(20,vector<int>(20,INF));
    int a, b, c, d;
    REP(i,m) {
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        cost[--a][--b] = c;
        cost[b][a] = d;
    }
    
    REP(i,n) REP(j,n) REP(k,n) {
        cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
    }
    int s, g, v, p;
    scanf("%d,%d,%d,%d", &s, &g, &v, &p);
    cout << v - p - cost[--s][--g] - cost[g][s] << endl;
    return 0;
}