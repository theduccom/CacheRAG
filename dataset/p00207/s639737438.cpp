#include <bits/stdc++.h>

#define rep(i, j) FOR(i, 0, j)
#define rep2(i, k) for(int i = 1; i <= k; ++i)
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define INF (1 << 30)

using namespace std;
 
const int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

int field[105][105], use[105][105];
int h, w, sx, sy, gx, gy, n;
int scol;

void make_map(int x,int y,int chk,int color){
  if(chk == 0){
    for(int i=y;i<y+2;i++){
      for(int j=x;j<x+4;j++) field[i][j] = color;
    }
  }
  else {
    for(int i=y;i<y+4;i++){
      for(int j=x;j<x+2;j++) field[i][j] = color;
    }
  }
}

bool dfs(int x,int y){
  use[y][x] = true;
  if(x == gx && y == gy) return true;
  for(int i=0;i<4;i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < w && ny >= 0 && ny < h && field[ny][nx] == field[sy][sx] && !use[ny][nx]) dfs(nx,ny);
  }
  return use[gy][gx];
}

int main() {
	while(cin >> w >> h, w) {
		memset(field, 0, sizeof(field));
		memset(use, false, sizeof(use));
		int scol = 0;
		cin >> sx >> sy >> gx >> gy;
		--sx; --sy; --gx; --gy;
		cin >> n;
		while(n--){
     		int c,d,x,y; cin >> c >> d >> x >> y; --x; --y;
      		make_map(x,y,d,c);
    	}
		if(dfs(sx, sy)) cout << "OK" << endl;
		else cout << "NG" << endl; 
	}
	return 0;
}