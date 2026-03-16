#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  int dx[7][3] = {{0,1,1},{0,0,0},{1,2,3},{-1,-1,0},{1,1,2},{0,1,1},{-1,0,1} };
  int dy[7][3] = {{1,0,1},{1,2,3},{0,0,0},{1,2,1},{0,1,1},{1,1,2},{1,1,0} };

  char ba[8][8];
  while(cin>>ba[0][0]) {
    REP(i,8)
      REP(j,8)
        if (i!=0||j!=0)
          cin >> ba[j][i];
    int f = -1;
    REP(y,8) {
      REP(x,8) {
        if (ba[x][y] == '1') {
          REP(i,7) {
            int j = 0;
            for(;j<3;j++) {
              int xx = x + dx[i][j];
              int yy = y + dy[i][j];
              if (xx<0||8<=xx||yy<0||8<=yy) break;
              if (ba[xx][yy] != '1')
                break;
            }
            if (j==3) {
              f = i;
              break;
            }
          }
          if (f>=0) break;
        }
        if (f>=0) break;
      }
      if (f>=0) break;
    }
    cout << (char)('A' + f) << endl;
  }
}