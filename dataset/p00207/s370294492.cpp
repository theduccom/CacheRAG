#include <bits/stdc++.h>

using namespace std;

int w, h;
int gx, gy;
int vx[] = {0, 1, 0, -1};
int vy[] = {1, 0, -1, 0};
int block[100][100];
bool check[100][100];
bool flag;

void dfs(int y, int x) {

  /*
  for(int i = 0; i < h; ++i) {
    for(int j = 0; j < w; ++j) {
      if(i == y && j == x) cout << 'P';
      else if(i == gy && j == gx) cout << 'G';
      else cout << block[i][j];
    }
    cout << endl;
  }
  cout << endl;
  */

  if(y == gy && x == gx) {
    
    flag = true;
    return;

  } else {
    
    for(int i = 0; i < 4; ++i) {
      
      int ny = y + vy[i];
      int nx = x + vx[i];
      
      if(ny >= 0 && ny < h && nx >= 0 && nx < w && !check[ny][nx] && block[ny][nx] && block[ny][nx] == block[y][x]) {
	
	check[ny][nx] = true;
	dfs(ny, nx);
	//check[ny][nx] = false;

      }

    }

  }

}

int main() {

  int sx, sy;
  int n;
  int c, d, x, y;

  while(cin >> w >> h) {

    if(w == 0 && h == 0) break;

    cin >> sx >> sy;
    cin >> gx >> gy;
    cin >> n;

    --sx;
    --sy;
    --gx;
    --gy;

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
	block[i][j] = 0;
	check[i][j] = false;
      }
    }

    for(int i = 0; i < n; ++i) {
	
	cin >> c >> d >> x >> y;

	--x;
	--y;
	
	int bw, bh;

	if(d) {
	  bw = 2;
	  bh = 4;
	} else {
	  bw = 4;
	  bh = 2;
	}

	for(int j = 0; j < bh; ++j) {
	  for(int k = 0; k < bw; ++k) {
	    block[y + j][x + k] = c;
	  }
	}

    }

    flag = false;
    check[sy][sx] = true;
    dfs(sy, sx);

    cout << (flag ? "OK" : "NG") << endl;

  }

}