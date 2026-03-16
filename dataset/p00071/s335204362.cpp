#include <iostream>
#include <algorithm>
using namespace std;

char G[8][8];

void solve(int x, int y) {
  const static int dx[] = {1,0,-1,0};
  const static int dy[] = {0,1,0,-1};
  G[y][x] = '0';
  for(int i = 0; i < 4; ++i) {
    for(int j = 1; j <= 3; ++j) {
      int nx = x + dx[i]*j;
      int ny = y + dy[i]*j;
      if(nx < 0 || nx >= 8) continue;
      if(ny < 0 || ny >= 8) continue;
      if(G[ny][nx] == '1') solve(nx,ny);
    }
  }
}

int main() {
  int T;
  cin >> T;
  for(int tc = 1; tc <= T; ++tc) {
    for(int i = 0; i < 8; ++i) {
      for(int j = 0 ; j < 8; ++j) {
	cin >> G[i][j];
      }
    }
    int x, y;
    cin >> x >> y;
    --x; --y;
    solve(x,y);
    cout << "Data " << tc << ":" << endl;
    for(int i = 0; i < 8; ++i) {
      for(int j = 0 ; j < 8; ++j) {
	cout << G[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}