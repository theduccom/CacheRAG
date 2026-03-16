#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cx[12] = {0, 0, 0, 0, 0, 0, -3, -2, -1, 1, 2, 3};
int cy[12] = {-3, -2, -1, 1, 2, 3, 0, 0, 0, 0, 0, 0};

int field[8][8];

void bomb(int X, int Y) {
    field[Y][X] = 0;
    for (int i=0; i<12; ++i) {
        int nx = X + cx[i];
        int ny = Y + cy[i];
        if (0 <= nx && nx < 8 && 0 <= ny && ny < 8 && field[ny][nx] == 1) {
            bomb(nx, ny);
        }
    }
}

int main() {
    int n, X, Y;
    cin >> n;
    for (int k=1; k<=n; ++k) {
        char c;
        for (int i=0; i<8; ++i) {
            for (int j=0; j<8; ++j) {
                cin >> c;
                field[i][j] = c - '0';
            }
        }
        cin >> X >> Y;
        --X; --Y;
        bomb(X, Y);
        cout << "Data " << k << ":" << endl;
        for (int i=0; i<8; ++i) {
            for (int j=0; j<8; ++j) {
                cout << field[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}