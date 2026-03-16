#include <iostream>
using namespace std;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};
int w, h, board[101][101], xg, yg;
bool visited[101][101];

bool search(int x, int y, int c) {
    if (x == xg && y == yg) {
        return true;
    }
    visited[y][x] = true;
    for (int i = 0; i < 4; i++) {
        int px = x + dx[i], py = y + dy[i];
        if (px < 1 || w < px || py < 1 || h < py) continue;
        if (visited[py][px] || board[py][px] != c) continue;
        if (search(px, py, c)) return true;
    }
    return false;
}

int main() {
    int i, j, xs, ys, n, c, d, x, y;

    while (cin >> w >> h, w) {
        for (i = 1; i <= h; i++) {
            for (j = 1; j <= w; j++) {
                board[i][j] = 0;
                visited[i][j] = false;
            }
        }
        cin >> xs >> ys;
        cin >> xg >> yg;
        cin >> n;
        while (n--) {
            cin >> c >> d >> x >> y;
            int bw = d==0? 4: 2;
            int bh = 6 - bw;
            for (i = y; i < y+bh; i++) {
                for (j = x; j < x+bw; j++) {
                    board[i][j] = c;
                }
            }
        }

        if (board[ys][xs] == board[yg][xg] &&
            search(xs, ys, board[ys][xs])) {
            cout << "OK";
        }
        else {
            cout << "NG";
        }
        cout << endl;
    }
    return 0;
}