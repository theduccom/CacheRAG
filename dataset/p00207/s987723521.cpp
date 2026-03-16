#include <iostream>
using namespace std;

int w, h;
int xs, ys;
int xg, yg;
int n;
int b[102][102];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool input() {
  cin >> w >> h;
  if (!w && !h) {
    return false;
  }
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      b[i][j] = -1;
    }
  }
  cin >> xs >> ys;
  cin >> xg >> yg;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int c, d, x, y;
    cin >> c >> d >> x >> y;
    if (!d) {
      for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
          b[y + i][x + j] = c;
        }
      }
    } else {
      for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 2; ++j) {
          b[y + i][x + j] = c;
        }
      }
    }
  }
  return true;
}

void dfs(int c, int y, int x) {
  if (b[y][x] != c) {
    return;
  }
  b[y][x] = -1;
  for (int i = 0; i < 4; ++i) {
    dfs(c, y + dy[i], x + dx[i]);
  }
}

void solve() {
  if (b[ys][xs] != b[yg][xg]) {
    cout << "NG" << endl;
    return;
  }

  dfs(b[ys][xs], ys, xs);
  if (b[yg][xg] == -1) {
    cout << "OK" << endl;
  } else {
    cout << "NG" << endl;
  }
}

int main() {
  while (input()) {
    solve();
  }
  return 0;
}