#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int, int>;

int dy[] = {-1, 0, 0, 1};
int dx[] = {0, -1, 1, 0};
int w, h;
pii s, g;
int n;
int f[110][110];

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);
  cout << fixed << setprecision(10);
  
  while (cin >> w >> h, w) {
    cin >> s.second >> s.first;
    s.second--, s.first--;
    cin >> g.second >> g.first;
    g.second--, g.first--;    
    cin >> n;
    for (int i = 0; i < n; i++) {
      int c, d, x, y;
      cin >> c >> d >> x >> y;
      x--, y--;
      if (d == 0) {
        for (int j = 0; j < 2; j++) {
          for (int k = 0; k < 4; k++) {
            f[y + j][x + k] = c;
          }
        }
      } else {
        for (int j = 0; j < 4; j++) {
          for (int k = 0; k < 2; k++) {
            f[y + j][x + k] = c;
          }
        }
      }
    }
    if (f[s.first][s.second] == 0) {
      cout << "NG" << endl;
      continue;
    }
    bool used[110][110] = {};
    used[s.first][s.second] = true;
    queue<pii> que;
    que.emplace(s);
    while (!que.empty()) {
      pii u = que.front(); que.pop();
      int y = u.first, x = u.second;
      for (int i = 0; i < 4; i++) {
        int ny = y + dy[i], nx = x + dx[i];
        if (ny >= 0 && ny < h && nx >= 0 && nx < w && f[ny][nx] == f[y][x] && !used[ny][nx]) {
          used[ny][nx] = true;
          que.emplace(ny, nx);
        }
      }
    }
    cout << (used[g.first][g.second] ? "OK" : "NG") << endl;
  }

  return 0;
}
