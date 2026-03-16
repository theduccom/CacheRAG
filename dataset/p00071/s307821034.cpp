#include<bits/stdc++.h>
using namespace std;

#define ing long long

int field[10][10];

void dfs(int x, int y) {
  field[x][y] = 0;

  for (int ty = max(1, y - 3); ty <= min(8, y + 3); ++ty) {
    if (field[x][ty]) dfs(x, ty);
  }

  for (int tx = max(1, x - 3); tx <= min(8, x + 3); ++tx) {
    if (field[tx][y]) dfs(tx, y);
  }
}

void data() {
  fill(field[0], field[10], 0);
  for (int y = 1; y <= 8; ++y) {
    string tmp;
    cin >> tmp;
    for (int x = 1; x <= 8; ++x) {
      field[x][y] = tmp[x - 1] - '0';
    }
  }

  int px, py;
  cin >> px >> py;
  dfs(px, py);

  for (int y = 1; y <= 8; ++y) {
    for (int x = 1; x <= 8; ++x) {
      cout << field[x][y];
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cout << "Data " << i + 1 << ":" << endl;
    data();
  }
}