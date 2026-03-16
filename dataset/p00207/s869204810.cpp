#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
using namespace std;
int w, h, xs, ys, xg, yg;
int mp[110][110];

bool dfs(int x, int y, int f) {
  if (x >= w || y >= h || x < 0 || y < 0 || mp[y][x] != f)
    return false;
  if (y == yg && x == xg && mp[y][x] == f)
    return true;
  mp[y][x] = 9;
  return dfs(x + 1, y, f) || dfs(x - 1, y, f) || dfs(x, y + 1, f) ||
         dfs(x, y - 1, f);
}

int main() {
  while (cin >> w >> h) {
    if (w == 0 && h == 0)
      break;
    int n;
    cin >> xs >> ys >> xg >> yg >> n;
    xs--;
    ys--;
    xg--;
    yg--;
    int c, d, x, y;
    rep(i, n) {
      cin >> c >> d >> x >> y;
      if (d == 0) {
        for (int i = y - 1; i < y + 1; i++)
          for (int j = x - 1; j < x + 3; j++) {
            mp[i][j] = c;
          }
      } else {
        for (int i = y - 1; i < y + 3; i++)
          for (int j = x - 1; j < x + 1; j++) {
            mp[i][j] = c;
          }
      }
    }
    cout << (dfs(xs, ys, mp[ys][xs]) ? "OK" : "NG") << endl;
  }
  return 0;
}