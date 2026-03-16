#include <cstring>
#include <iostream>
#define W 101
#define H 101
using namespace std;
int main() {
  int h, w, x, y;
  char m[H][W];
  bool n[H][W];
  while (cin >> h >> w && h > 0) {
    memset(m, '.', sizeof(char) * H * W);
    memset(n, 0, sizeof(bool) * H * W);
    for (y = 0; y < h; y++) {
      cin >> m[y];
    }
    x = y = 0;
    while (1) {
      if (n[y][x]) {
        cout << "LOOP" << endl;
        break;
      }
      n[y][x] = 1;
      if (m[y][x] == '^') y--;
      else if (m[y][x] == '>') x++;
      else if (m[y][x] == 'v') y++;
      else if (m[y][x] == '<') x--;
      else {
        cout << x << ' ' << y << endl;
        break;
      }
    }
  }
  return 0;
}