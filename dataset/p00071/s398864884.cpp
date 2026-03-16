#include <iostream>
using namespace std;

void bomb(int x, int y, char field[8][9]) {
    field[y][x] = '0';
    for (int i = x - 3; i <= x + 3; i++) {
        if (0 <= i && i < 9 && field[y][i] == '1') {
            bomb(i, y, field);
        }
    }
    for (int i = y - 3; i <= y + 3; i++) {
        if (0 <= i && i < 9 && field[i][x] == '1') {
            bomb(x, i, field);
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char field[8][9];
        for (int j = 0; j < 8; j++) {
            cin >> field[j];
        }
        int x, y;
        cin >> x >> y;
        bomb(x - 1, y - 1, field);
        cout << "Data " << i + 1 << ":" << endl;
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                cout << field[j][k];
            }
            cout << endl;
        }
    }
}