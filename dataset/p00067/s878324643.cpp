#include <iostream>

using namespace std;

int f[12][12];
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

void fill(int x, int y, int c) {
    f[y][x] = c;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx > 11 || ny < 0 || ny > 11) {
            continue;
        }
        if (f[ny][nx] == 1) {
            fill(nx, ny, c);
        }
    }
}

int main() {
    char ch;
    while (1) {
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                if (!(cin >> ch)) {
                    return 0;
                }
                f[i][j] = ch - '0';
            }
        }
        int color = 2;
        bool success = true;
        while (success) {
            success = false;
            for (int i = 0; i < 12; i++) {
                for (int j = 0; j < 12; j++) {
                    if (f[i][j] == 1) {
                        fill(j, i, color);
                        color++;
                        success = true;
                    }
                }
            }
        }
        cout << color - 2 << endl;
    }

    return 0;
}