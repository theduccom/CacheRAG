#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int w, h;
int xs, ys;
int xg, yg;
int maze[102][102];

using P = pair<int, int>;
void solve() {
    int c = maze[ys][xs];
    queue<P> que;
    que.push(P(ys, xs));
    set<P> visited;
    visited.insert(P(ys, xs));
    bool ok = false;
    while (que.size()) {
        auto p = que.front();
        que.pop();
        int y = p.first;
        int x = p.second;
        if (yg == y && xg == x) ok = true;
        rep(k, 4) {
            int ny = y + dy[k];
            int nx = x + dx[k];
            if (ny < 0 || nx < 0) continue;
            if (h <= ny || w <= nx) continue;
            if (maze[ny][nx] != c) continue;
            if (visited.count(P(ny, nx))) continue;
            visited.insert(P(ny, nx));
            que.push(P(ny, nx));
        }
    }
    cout << (ok ? "OK" : "NG") << endl;
}

int main() {
    while (cin >> w >> h, w) {
        rep(i, 102) rep(j, 102) maze[i][j] = -1;
        cin >> xs >> ys;
        cin >> xg >> yg;
        xs--, ys--;
        xg--, yg--;
        int n;
        cin >> n;
        rep(_, n) {
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            x--, y--;
            if (d == 0) {
                rep(i, 2) rep(j, 4) maze[y + i][x + j] = c;
            } else {
                rep(i, 4) rep(j, 2) maze[y + i][x + j] = c;
            }
        }
        solve();
    }

    return 0;
}