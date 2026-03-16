#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

int W, H, xs, ys, xg, yg, N;
int g[128][128];
int dy[] = {0,-1,0,1}, dx[] = {-1,0,1,0};
int start;

int dfs(int y, int x){
  //  printf("%d %d\n", y, x);
  if(y == yg && x == xg) return 1;
  g[y][x] = 0;
  rep(d, 4){
    int ny = y+dy[d], nx = x+dx[d];
    if(ny < 0 || ny >= H || nx < 0 || nx >= W || g[ny][nx] != start) continue;
    if(dfs(ny, nx)) return 1;
  }
  return 0;
}

int main(){
  while(scanf("%d%d", &W, &H) && W+H){
    scanf("%d%d%d%d%d", &xs, &ys, &xg, &yg, &N); xs--; ys--; xg--; yg--;
    memset(g, -1, sizeof(g));
    rep(i, N){
      int c, d, x, y;
      scanf("%d%d%d%d", &c, &d, &x, &y); x--; y--;
      if(!d){
	rep(i, 2) rep(j, 4) g[i+y][j+x] = c;
      }else{
	rep(i, 4) rep(j, 2) g[i+y][j+x] = c;
      }
    }
    start = g[ys][xs];
    /*    rep(i, H){
      rep(j, W) printf("%d", g[i][j]); puts("");
      }*/

    puts(dfs(ys, xs)?"OK":"NG");
  }

  return 0;
}