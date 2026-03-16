#include <iostream>
using namespace std;

const int X_END = 8;
const int Y_END = 8;

char m[Y_END][X_END + 1];

char whatFigure() {
    for (int y = 0; y < Y_END; y++) {
        for (int x = 0; x < X_END; x++) {
            if (m[y][x] == '1') {
                if (x+1 < X_END && y+1 < Y_END
                    && m[y][x+1] == '1' && m[y+1][x] == '1' && m[y+1][x+1] == '1') {
                    return 'A';
                } else if (y+3 < Y_END
                           && m[y+1][x] == '1' && m[y+2][x] == '1' && m[y+3][x] == '1') {
                    return 'B';
                } else if (x+3 < X_END
                           && m[y][x+1] == '1' && m[y][x+2] == '1' && m[y][x+3] == '1') {
                    return 'C';
                } else if (x >= 1 && y+2 < Y_END
                           && m[y+1][x] == '1' && m[y+1][x-1] == '1' && m[y+2][x-1] == '1') {
                    return 'D';
                } else if (x+2 < X_END && y+1 < Y_END
                           && m[y][x+1] == '1' && m[y+1][x+1] == '1' && m[y+1][x+2] == '1') {
                    return 'E';
                } else if (x+1 < X_END && y+2 < Y_END
                           && m[y+1][x] == '1' && m[y+1][x+1] == '1' && m[y+2][x+1] == '1') {
                    return 'F';
                } else if (x >= 1 && x+1 < X_END && y+1 < Y_END
                           && m[y][x+1] == '1' && m[y+1][x] == '1' && m[y+1][x-1] == '1') {
                    return 'G';
                }
            }
        }
    }
    return '0';
}

int main() {
    while (cin >> m[0]) {
        for (int i = 1; i < 8; i++) {
            cin >> m[i];
        }
        cout << whatFigure() << endl;
    }
}