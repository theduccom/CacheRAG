#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
#include <algorithm>

#define rep(i, j) FOR(i, 0, j)
#define FOR(i, j, k) for(int i = j; i < k; ++i)

using namespace std;

int w, h, xs, ys, xg, yg, n, c, d, x, y, b[101][101];
int dx[] = {0, -1, 0, 1}, dy[] = {-1, 0, 1, 0};

bool dfs(int x, int y){

  int nx, ny;
  b[x][y] = 0;
  if(x == xg && y == yg) return true;
  bool r = 0;
  rep(i, 4){
    nx = x + dx[i]; ny = y + dy[i];
    if(nx > 0 && nx <= h && ny > 0 && ny <= w && b[nx][ny]==c)r=r||dfs(nx, ny);
  }
  return r;
}

int main(){
  while(scanf("%d %d", &w, &h) && w && h){
    memset(b, 0, sizeof(b));
    scanf("%d%d%d%d", &ys, &xs, &yg, &xg);
    scanf("%d", &n);
    rep(i, n){
      scanf("%d%d%d%d", &c, &d, &y, &x);
      rep(j, (d?4:2)) rep(k, (d?2:4)) b[x + j][y + k] = c;
    }
    /*    rep(i, h){
      rep(j, w) printf("%d ", b[i][j]);
      puts("");
      }*/
    c = b[xs][ys];
    //    printf("%d\n", c);
    //    fprintf(stderr, "error\n");
    if(c > 0 && dfs(xs, ys)) puts("OK");
    else puts("NG");
  }
  return 0;
}