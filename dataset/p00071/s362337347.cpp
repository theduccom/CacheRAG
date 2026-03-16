#include <iostream>
#include <algorithm>
using namespace std;

const int R = 8;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,1,0,-1};
char G[R][R];

void rec(int x, int y) {
  G[y][x] = '0';
  for(int i = 0; i < 4; ++i) {
    for(int j = 1; j <= 3; ++j) {
      int nx = x + dx[i] * j;
      int ny = y + dy[i] * j;
      if(nx < 0 || nx >= R) break;
      if(ny < 0 || ny >= R) break;
      if(G[ny][nx] == '1') rec(nx,ny);
    }
  }
}

int main() {
  int Tc;
  cin >> Tc;
  for(int tc = 0; tc < Tc; ++tc) {
    int x, y;
    for(int i = 0; i < R; ++i) {
      for(int j = 0; j < R; ++j) {
        cin >> G[i][j];
      }
    }
    cin >> x >> y;
    --x; --y;
    rec(x, y);
    cout << "Data " << tc+1 << ":" << endl;
    for(int i = 0; i < R; ++i) {
      for(int j = 0; j < R; ++j) {
        cout << G[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}