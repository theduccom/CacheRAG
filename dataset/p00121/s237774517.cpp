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
  map<string, int> mp;
  queue<string> Q;
  Q.push("01234567");
  mp["01234567"] = 1;
  int d[] = {-4, -1, 1, 4};
  while(!Q.empty()) {
    string s = Q.front();
    Q.pop();
    int x = s.find('0');
    REP(i,4) {
      if (!(i==0&&x<3||i==1&&x%4==0||i==2&&x%4==3||i==3&&x>=4)) {
        string ss = s;
        swap(ss[x], ss[x+d[i]]);
        if (!mp[ss]) {
          Q.push(ss);
          mp[ss] = mp[s] + 1;
        }
      }
    }
  }
  //cout << "ok" << endl;
  string s;
  while(getline(cin,s)) {
    s.erase(remove(ALL(s), ' '), s.end());
    cout << mp[s]-1 << endl;
  }
  
}