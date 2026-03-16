#include <iostream>
#include <cstring>
using namespace std;

int w, h;
int sx, sy;
int gx, gy;
int t[102][102];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool dfs(int x, int y){
  if(x == gx && y == gy){
    return true;
  }

  char c = t[y][x];
  t[y][x] = 0;

  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];

    if(nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
    if(t[ny][nx] != c) continue;
    if(dfs(nx, ny)) return true;
  }

  return false;
}

void solve(){
  if(t[sy][sx] == 0){
    cout << "NG" << endl;
    return;
  }
  cout << (dfs(sx, sy) ? "OK" : "NG") << endl;
}

int main(){
  while(cin >> w >> h, w || h){
    cin >> sx >> sy; sx--; sy--;
    cin >> gx >> gy; gx--; gy--;

    int n;
    cin >> n;

    memset(t, 0, sizeof(t));

    for(int i = 0; i < n; i++){
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      x--;
      y--;

      if(d == 0){ //脱即捉
        for(int i = y; i < y + 2; i++){
          for(int j = x; j < x + 4; j++){
            t[i][j] = c;
          }
        }
      }
      else{ //巽存側
        for(int i = y; i < y + 4; i++){
          for(int j = x; j < x + 2; j++){
            t[i][j] = c;
          }
        }
      }
    }

    solve();
  }
}