#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define H_MAX 100
#define W_MAX 100

int H, W;

string f[H_MAX];      // field
bool p[H_MAX][W_MAX]; // have passed?

void go(int x, int y) {
    if (p[y][x]) {
        cout << "LOOP\n";
        return;
    }
    p[y][x] = true;
    switch (f[y][x]) {
        case '>':
            go(x+1, y);
            break;
        case '<':
            go(x-1, y);
            break;
        case '^':
            go(x, y-1);
            break;
        case 'v':
            go(x, y+1);
            break;
        default:
            cout << x << ' ' << y << endl;
            break;
    }
}

int main() {
    while (cin >> H >> W) {
        if (H == 0 && W == 0) break;
        for (int i = 0; i < H; i++) {
            cin >> f[i];
            for (int j = 0; j < W; j++) {
                p[i][j] = false;
            }
        }
        go(0, 0);
    }
    return 0;
}