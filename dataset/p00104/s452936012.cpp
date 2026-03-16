#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int h,w;
  while(cin>>h>>w,h+w) {
    char ba[w][h];
    REP(y,h) {
      REP(x,w) {
        cin >> ba[x][y];
      }
    }
    int x = 0, y = 0;
    int dx[] = {0,1,0,-1};
    int dy[] = {-1,0,1,0};
    char aa[] = {'^','>','v','<'};
    map<char,int> hoge;
    REP(i,4)
      hoge[aa[i]] = i;
    int f[w][h];
    memset(f,0,sizeof(f));
    while(true) {
     
      if (f[x][y]) break;
      if (ba[x][y] == '.') break;

      f[x][y]=1;
      int aa = hoge[ba[x][y]];
      x += dx[aa];
      y += dy[aa];
    }
    if (f[x][y]) cout << "LOOP" << endl;
    else cout << x << " " << y << endl;
  }
}