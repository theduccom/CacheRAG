#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int main() {
  // 5, 9, 13
  int dx1[] = {-1,0,0,0,1};
  int dy1[] = {0,-1,0,1,0};
  int dx2[] = {-1,-1,-1,0,0,0,1,1,1};
  int dy2[] = {-1,0,1,-1,0,1,-1,0,1};
  int dx3[] = {-2,-1,-1,-1,0,0,0,0,0,1,1,1,2};
  int dy3[] = {0,-1,0,1,-2,-1,0,1,2,-1,0,1,0};
  vector<int> dx[3];
  vector<int> dy[3];
  dx[0].assign(dx1,dx1+5);
  dx[1].assign(dx2,dx2+9);
  dx[2].assign(dx3,dx3+13);
  dy[0].assign(dy1,dy1+5);
  dy[1].assign(dy2,dy2+9);
  dy[2].assign(dy3,dy3+13);
  
  int x, y, s;
  int ans1 = 100;
  int ans2 = 0;
  int ma[10][10];
  memset(ma,0,sizeof(ma));
  while(scanf("%d,%d,%d", &x,&y,&s)==3) {
    s--;
    REP(i,dx[s].size()) {
      int xx = x + dx[s][i];
      int yy = y + dy[s][i];
      if (xx<0||10<=xx||yy<0||10<=yy) continue;
      if (ma[xx][yy]==0) ans1--;
      ma[xx][yy]++;
      ans2 = max(ma[xx][yy], ans2);
    }

  }
  cout << ans1 << endl;
  cout << ans2 << endl;
}