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

char g[16][16];
int dy[] = {0,-1,0,1}, dx[] = {-1,0,1,0};

void dfs(int y, int x){
  if(g[y][x] == '0') return;
  g[y][x] = '0';
  rep(d, 4){
    int ny = y+dy[d], nx = x+dx[d];
    if(ny < 0 || ny >= 12 || nx < 0 || nx >= 12 || g[ny][nx] == '0') continue;
    dfs(ny, nx);
  }
}

int main(){
  while(~scanf("%s", g[0])){
    REP(i, 1, 12) scanf("%s", g[i]);

    int res = 0;
    rep(i, 12) rep(j, 12){
      if(g[i][j] == '0') continue;
      res++;
      dfs(i, j);
    }
    printf("%d\n", res);
  }
  return 0;
}