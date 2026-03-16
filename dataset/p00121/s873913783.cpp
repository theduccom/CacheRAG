#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <utility>
using namespace std;

#define rep(i,n) for(int (i)=0; (i)<(int)(n); ++(i))
#define foreach(c,i) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)

typedef pair<string,int> Psi;

map<string, int> m;

const int d[4] = { -4, 4, -1, 1 };

int main() {
  queue<Psi> que;
  que.push(Psi(string("01234567"), 0));
  while(!que.empty()) {
    Psi p = que.front();
    int cost = p.second;
    que.pop();
    if (m.count(p.first)) continue;
    m.insert(Psi(p.first, cost));
        
    int z_idx = -1;
    rep (i,8) if (p.first[i] == '0') { z_idx = i; break; }
    
    for (int i = 0; i < 4; ++i) {
      if (z_idx == 3 && i == 3) continue;
      if (z_idx == 4 && i == 2) continue;
      int t_idx = z_idx + d[i];
      if (t_idx < 0 || t_idx >= 8) continue;
      string copy = p.first;
      swap(copy[z_idx], copy[t_idx]);
      que.push(Psi(copy, cost+1));
    }
  }
    
  string a = "01234567";
  while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7]) {
    cout << m[a] << endl;
  }
  return 0;
}