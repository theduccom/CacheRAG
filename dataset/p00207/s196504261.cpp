#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
typedef long long ll;
typedef pair<int, int> P;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    while (true)
    {
        int w, h;
        cin >> w >> h;
        if (w == 0 && h == 0) break;

        int grid[100][100];
        rep(i, w) rep(j, h) grid[i][j] = 0;

        int sx, sy, gx, gy;
        cin >> sx >> sy >> gx >> gy;
        sx--; sy--; gx--; gy--;

        int n;
        cin >> n;

        rep(i, n) {
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            if (d == 0) {
                rep(j, 4) rep(k, 2) grid[j+x-1][k+y-1] = c;
            } else {
                rep(j, 2) rep(k, 4) grid[j+x-1][k+y-1] = c;
            }
        }

        bool ok[100][100];
        rep(i, w) rep(j, h) ok[i][j] = true;

        bool flag = false;
        int sc = grid[sx][sy];
        queue<P> que;
        que.push(P(sx, sy));
        while (que.size()) {
            P p = que.front();
            que.pop();
            if (p.first == gx && p.second == gy) {
                flag = true;
                break;
            }

            rep(i, 4) {
                int nx = p.first+dx[i], ny = p.second+dy[i];
                if (0 <= nx && nx < w && 0 <= ny && ny < h && grid[nx][ny] == sc && ok[nx][ny] == true) {
                    que.push(P(nx, ny));
                    ok[nx][ny] = false;
                }
            }
        }

        if (flag && sc > 0) cout << "OK" << endl;
        else cout << "NG" << endl;
    }


    return 0;
}
