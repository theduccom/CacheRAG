#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()


char ba[8][8];

void go(int x, int y) {
  REP(i,7) {
    if (x-3+i>=0 && x-3+i<8 && ba[x-3+i][y] == '1') {
      ba[x-3+i][y] = '0';
      go(x-3+i,y);
    }
    if (y-3+i>=0 && y-3+i<8 && ba[x][y-3+i] == '1') {
      ba[x][y-3+i] = '0';
      go(x,y-3+i);
    }
  }
}
int main() {
  int n;
  cin >> n;
  REP(datan, n) {
    REP(i,8)
      REP(j,8)
      cin >> ba[j][i];
    int sx,sy;
    cin >> sx;
    cin >> sy;
    sx--;sy--;
    ba[sx][sy] = '0';
    
    go(sx,sy);

    printf ("Data %d:\n", datan+1);
    REP(y,8) {
      REP(x,8) {
        cout << ba[x][y];
      }
      cout << endl;
    }
  }
}