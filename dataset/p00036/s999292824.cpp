#include <iostream>
using namespace std;

int main(void) {
    char c;
    int a[8][8];

    while (!cin.eof()) {
        int ci = -1, cj = -1;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cin >> c;
                a[i][j] = int(c - '0');
                if (ci == -1 && a[i][j] == 1) {
                    ci = i;
                    cj = j;
                }
            }
        }

        if (ci <= 6 && cj <=6 && a[ci][cj] + a[ci][cj+1] + a[ci+1][cj] + a[ci+1][cj+1] == 4)
            cout << "A" << endl;
        else if (ci <= 4 && cj <=7 && a[ci][cj] + a[ci+1][cj]+a[ci+2][cj]+a[ci+3][cj] == 4)
            cout << "B" << endl;
        else if (ci <= 7 && cj <= 4 && a[ci][cj] + a[ci][cj+1] + a[ci][cj+2] + a[ci][cj+3] == 4)
            cout << "C" << endl;
        else if (ci <= 5 && 1 <= cj && a[ci][cj] + a[ci+1][cj] + a[ci+1][cj-1] + a[ci+2][cj-1] == 4)
            cout << "D" << endl;
        else if (ci <= 6 && cj <= 5 && a[ci][cj] + a[ci][cj+1] + a[ci+1][cj+1] + a[ci+1][cj+2] == 4)
            cout << "E" << endl;
        else if (ci <= 5 && cj <= 6 && a[ci][cj] + a[ci+1][cj] + a[ci+1][cj+1] + a[ci+2][cj+1] == 4)
            cout << "F" << endl;
        else if (ci <= 6 && 1 <= cj && cj <= 6 && a[ci][cj] + a[ci][cj+1] + a[ci+1][cj] + a[ci+1][cj-1] == 4)
            cout << "G" << endl;
    }
    return 0;
}

