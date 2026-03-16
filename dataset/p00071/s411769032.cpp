#include <bits/stdc++.h>
using namespace std;

bool inside(int y, int x) {
  return 0 <= y && y < 8 && 0 <= x && x < 8;
}

int main() {
  int n;
  cin >> n;

  for (int Case = 1; Case <= n; ++Case) {
    bool b[10][10];
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        scanf("%1d", &b[i][j]);
      }
    }

    queue<pair<int, int>> q;
    int x, y;
    int dy[] = {-1, 0, 1, 0}, dx[] = {0, 1, 0, -1};

    cin >> x >> y;
    q.push(make_pair(x - 1, y - 1));

    while (!q.empty()) {
      x = q.front().first;
      y = q.front().second;
      q.pop();

      if (!b[y][x]) continue;
      b[y][x] = false;

      for (int k = 1; k <= 3; ++k) {
        for (int i = 0; i < 4; ++i) {
          int nx = x + k * dx[i];
          int ny = y + k * dy[i];
          if (inside(ny, nx) && b[ny][nx]) {
            q.push(make_pair(nx, ny));
          }
        }
      }
    }

    cout << "Data " << Case << ":" << endl;
    for (int i = 0; i < 8; ++i) {
      for (int j = 0; j < 8; ++j) {
        cout << b[i][j] << (j + 1 == 8 ? "\n" : "");
      }
    }
  }
}