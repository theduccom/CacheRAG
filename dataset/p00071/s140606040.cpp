#include <iostream>
using namespace std;

void rec(char map[8][8], int x, int y) {
  static int d[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
  map[y][x] = '0';
  for(int i = 0; i < 4; i++) {
    for(int j = 1; j <= 3; j++) {
      int nx = x + d[i][0]*j;
      int ny = y + d[i][1]*j;

      if(nx < 0 || nx >= 8
	 || ny < 0 || ny >= 8) continue;

      if(map[ny][nx] == '1') rec(map, nx, ny);
    }
  }
}

int main() {
  int n;
  cin >> n;
  for(int c = 1; c <= n; c++) {
    char map[8][8];
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
	cin >> map[i][j];
      }
    }
    int x, y;
    cin >> x >> y;
    x -= 1;
    y -= 1;
    rec(map, x, y);

    cout << "Data " << c << ":" << endl;
    for(int i = 0; i < 8; i++) {
      for(int j = 0; j < 8; j++) {
	cout << map[i][j];
      }
      cout << endl;
    }
  }
  return 0;
}