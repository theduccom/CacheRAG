#include <iostream>
#include <cstdio>
using namespace std;

bool isValidRange(int y, int x) {
    return 0 <= x && x < 10 && 0 <= y && y < 10;
}

void dropInk(int x, int y, int size, int d[10][10]) {
    switch (size) {
    case 1:
        for (int i = x - 1; i <= x + 1; i++) {
            if (isValidRange(y, i)) {
                d[y][i]++;
            }
        }
        for (int i = y - 1; i <= y + 1; i++) {
            if (isValidRange(i, x)) {
                d[i][x]++;
            }
        }
        d[y][x]--;
        break;
    case 2:
        for (int i = y - 1; i <= y + 1; i++) {
            for (int j = x - 1; j <= x + 1; j++) {
                if (isValidRange(i, j)) {
                    d[i][j]++;
                }
            }
        }
        break;
    case 3:
        for (int i = y - 1; i <= y + 1; i++) {
            for (int j = x - 1; j <= x + 1; j++) {
                if (isValidRange(i, j)) {
                    d[i][j]++;
                }
            }
        }
        if (isValidRange(y - 2, x)) d[y - 2][x]++;
        if (isValidRange(y, x - 2)) d[y][x - 2]++;
        if (isValidRange(y, x + 2)) d[y][x + 2]++;
        if (isValidRange(y + 2, x)) d[y + 2][x]++;
        break;
    }
}

int main() {
    int cells[10][10] = {};
    int x, y, size;
    while (scanf("%d,%d,%d", &x, &y, &size) != EOF) {
        dropInk(x, y, size, cells);
    }
    int zeroNum = 0, max = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (cells[i][j] == 0) {
                zeroNum++;
            }
            if (max < cells[i][j]) {
                max = cells[i][j];
            }
        }
    }
    cout << zeroNum << endl
         << max << endl;
}