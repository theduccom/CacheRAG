#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int w, h, xs, ys, xg, yg, n;
int board[110][110];
bool used[110][110];

int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};

bool valid(int x, int y) {
    return 0 < x && x <= w && 0 < y && y <= h;
}

bool dfs(int x, int y) {
    if (x == xg && y == yg) return true;
    used[y][x] = true;
    for (int i=0; i<4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (valid(nx, ny) && ! used[ny][nx] && board[ny][nx] == board[y][x] && dfs(nx, ny)) {
            return true;
        }
    }
    return false;
}

int main() {
    while (cin >> w >> h, (w || h)) {
        cin >> xs >> ys >> xg >> yg >> n;
        int c, d, x, y;
        for (int i=0; i<n; ++i) {
            cin >> c >> d >> x >> y;
            for (int j=0; j<2; ++j) {
                for (int k=0; k<4; ++k) {
                    if (d == 0) {
                        board[y + j][x + k] = c;
                    } else {
                        board[y + k][x + j] = c;
                    }
                }
            }
        }
        memset(used, false, sizeof used);
        cout << (dfs(xs, ys) ? "OK" : "NG") << endl;
    }
    return 0;
}