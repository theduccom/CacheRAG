#include <iostream>
using namespace std;

void search(int y, int x, char field[12][13]) {
    field[y][x] = '0';
    for (int nx = x - 1; nx <= x + 1; nx += 2) {
        if (0 <= nx && nx < 12 && field[y][nx] == '1') {
            search(y, nx, field);
        }
    }
    for (int ny = y - 1; ny <= y + 1; ny += 2) {
        if (0 <= ny && ny < 12 && field[ny][x] == '1') {
            search(ny, x, field);
        }
    }
}

int main() {
    char field[12][13];
    while (cin >> field[0]) {
        for (int i = 1; i < 12; i++) {
            cin >> field[i];
        }
        int islandNum = 0;
        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                if (field[i][j] == '1') {
                    search(i, j, field);
                    islandNum++;
                }
            }
        }
        cout << islandNum << endl;
    }
}