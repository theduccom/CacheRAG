#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<30;

int main() {
  // ÅÉ8!ÊèÌÅZè(<=28)ðßéB
  map<vector<int>, int> mp;
  queue<pair<vector<int>, int> > Q;
  vector<int> v(8);
  REP(i,8) v[i] = i;
  Q.push(make_pair(v,1));
  int x = 0;                    // 0 ÌÊu
  while(!Q.empty()) {
    v = Q.front().first;
    int n = Q.front().second;
    if (n >= 38) break;
    Q.pop();
    if (mp[v]) continue;
    else mp[v] = n;
    REP(i,8)
      if (v[i] == 0)
        x = i;
    //cout << n << endl;
    if (x != 0 && x != 4) {
      vector<int> vv = v;
      swap(vv[x], vv[x-1]);
      Q.push(make_pair(vv, n+1));
    }
    if (x <= 3) {
      vector<int> vv = v;
      swap(vv[x], vv[x+4]);
      Q.push(make_pair(vv, n+1));
    }
    if (x >= 4) {
      vector<int> vv = v;
      swap(vv[x], vv[x-4]);
      Q.push(make_pair(vv, n+1));
    }
    if (x != 3 && x != 7) {
      vector<int> vv = v;
      swap(vv[x], vv[x+1]);
      Q.push(make_pair(vv, n+1));
    }
  }
  //cout << "ok" << endl;
  vector<int> a(8);
  while(cin >> a[0]) {
    REP(i,7)
      cin >> a[i+1];
    cout << mp[a]-1 << endl;
  }
  
}