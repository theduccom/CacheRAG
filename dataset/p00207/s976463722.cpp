#include <iostream>

using namespace std;

int B[102][102], C, xg, yg;

bool rec(int x, int y) {
  if (B[x][y] != C)
    return false;
  if (x == xg && y == yg)
    return true;
  B[x][y] = 0;
  if (rec(x+1, y) || rec(x-1, y) || rec(x, y+1) || rec(x, y-1))
    return true;
  return false;
}

int main() {
  for (;;) {
    int w, h;
    cin >> w >> h;
    if (!w && !h) return 0;
    for (int x = 0; x < w+2; x++)
      for (int y = 0; y < h+2; y++)
        B[x][y] = 0;
    int xs, ys, n;
    cin >> xs >> ys >> xg >> yg >> n;
    for (int i = 0; i < n; i++) {
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      for (int j = 0; j < 2; j++)
        for (int k = 0; k < 4; k++)
          (d ? B[x+j][y+k] : B[x+k][y+j]) = c;
    }
    if (!B[xs][ys]) {
      cout << "NG" << endl;
      continue;
    }
    C = B[xs][ys];
    cout << (rec(xs, ys) ? "OK" : "NG") << endl;
  }
}