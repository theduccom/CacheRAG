#include <iostream>
#include <cstring>
using namespace std;

int n, w, h, sx, sy, gx, gy;
int t[102][102];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool solve(int x, int y, int kind){
  if(x == gx && y == gy){
    return true;
  }
  t[y][x] = -1;

  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];

    if(0 <= nx && nx < w && 0 <= ny && ny < h && t[ny][nx] == kind){
      if(solve(nx, ny, kind)) return true;
    }
  }

  return false;
}

int main(){
  while(cin >> w >> h, w || h){
    memset(t, 0, sizeof(t));

    cin >> sx >> sy;
    cin >> gx >> gy;
    sx--;
    sy--;
    gx--;
    gy--;

    cin >> n;

    for(int i = 0; i < n; i++){
      int c, d, x, y;
      int ww, hh;
      cin >> c >> d >> x >> y;
      x--;
      y--;

      if(d == 0){
        ww = 4;
        hh = 2;
      }
      else{
        ww = 2;
        hh = 4;
      }

      for(int j = y; j < y + hh; j++){
        for(int k = x; k < x + ww; k++){
          t[j][k] = c;
        }
      }
    }

    /*
    for(int i = 0; i < h; i++){
      for(int j =0; j < w;j ++){
        cout<<t[i][j];
      }
      cout<<endl;
    }
    */

    bool ans = t[sy][sx] == 0 ? false : solve(sx, sy, t[sy][sx]);

    cout << (ans ? "OK" : "NG") << endl;
  }
}