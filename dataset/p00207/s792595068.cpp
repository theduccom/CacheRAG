#include <iostream>
#include <cstring>
using namespace std;

int field[101][101];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
int heights[] = {2, 4};
int widths[] = {4, 2};
int w, h;
int gx, gy;

bool isMaze(int y, int x) {
    if (y == gy && x == gx) {
        return true;
    }
    int c = field[y][x];
    field[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i], nx = x + dx[i];
        if (1 <= ny && ny <= h && 1 <= nx && nx <= w && field[ny][nx] == c && isMaze(ny, nx)) {
            return true;
        }
    }
    return false;
}

int main() {
    while (true) {
        cin >> w >> h;
        if ((w | h) == 0) {
            break;
        }
        int sx, sy, n;
        cin >> sx >> sy >> gx >> gy >> n;
        memset(field, 0, sizeof(field));
        while (n--) {
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            for (int i = 0; i < heights[d]; i++) {
                for (int j = 0; j < widths[d]; j++) {
                    field[y + i][x + j] = c;
                }
            }
        }
        if (field[sy][sx] > 0 && field[sy][sx] == field[gy][gx] && isMaze(sy, sx)) {
            cout << "OK" << endl;
        } else {
            cout << "NG" << endl;
        }
    }
}