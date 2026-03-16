#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int w, h, xs, ys, xg, yg, n;
int board[110][110];
bool used[110][110];

int dx1[8] = {0,1,2,3,0,1,2,3};
int dy1[8] = {0,0,0,0,1,1,1,1};

int dx2[8] = {0,0,0,0,1,1,1,1};
int dy2[8] = {0,1,2,3,0,1,2,3};

bool dfs(int x, int y, int xg, int yg, int color) {
    if (board[y][x] != color || used[y][x] || x <= 0 || y <= 0 || w < x || h < y) {
        return false;
    }
    if (x == xg && y == yg) {
        return true;
    }
    used[y][x] = true;
    bool ret = false;
    ret |= dfs(x+1, y, xg, yg, color);
    ret |= dfs(x-1, y, xg, yg, color);
    ret |= dfs(x, y+1, xg, yg, color);
    ret |= dfs(x, y-1, xg, yg, color);
    return ret;
}

int main() {
    while (cin >> w >> h, (w || h)) {
        memset(board, 0, sizeof board);
        cin >> xs >> ys >> xg >> yg >> n;
        int c, d, x, y;
        for (int i=0; i<n; ++i) {
            cin >> c >> d >> x >> y;
            if (d == 0) {
                for (int i=0; i<8; ++i) {
                    board[y + dy1[i]][x + dx1[i]] = c;
                }
            } else {
                for (int i=0; i<8; ++i) {
                    board[y + dy2[i]][x + dx2[i]] = c;
                }
            }
        }
        memset(used, false, sizeof used);
        if (board[ys][xs] && dfs(xs, ys, xg, yg, board[ys][xs])) {
            cout << "OK" << endl;
        } else {
            cout << "NG" << endl;
        }
    }
    return 0;
}