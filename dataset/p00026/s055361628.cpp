#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int masu[10][10];
void small(int x, int y) {
    for (int i = x-1; i <= x+1; i++) {
        if (0 <= i && i < 10) {
            masu[y][i]++;
        }
    }
    for (int i = y-1; i <= y+1; i++) {
        if (0 <= i && i < 10) {
            masu[i][x]++;
        }
    }
    masu[y][x]--;
}

void middle(int x, int y) {
    for (int i = y-1; i <= y+1; i++) {
        for (int j = x-1; j <= x+1; j++) {
            if (0 <= i && i < 10 && 0 <= j && j < 10) {
                masu[i][j]++;
            }
        }
    }
}

void big(int x, int y) {
    middle(x, y);
    if (0 <= x-2 && x-2 < 10) masu[y][x-2]++;
    if (0 <= x+2 && x+2 < 10) masu[y][x+2]++;
    if (0 <= y-2 && y-2 < 10) masu[y-2][x]++;
    if (0 <= y+2 && y+2 < 10) masu[y+2][x]++;
}

int main(void) {
    string s;

    while (cin >> s) {
        replace(s.begin(), s.end(), ',', ' ');
        stringstream ss(s);
        int x, y, size;
        ss >> x >> y >> size;

        switch (size) {
        case 1:
            small(x, y);
            break;
        case 2:
            middle(x, y);
            break;
        case 3:
            big(x, y);
        }
    }

    int max_num = -1;
    int no_color = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (masu[i][j] == 0) {
                no_color++;
            } else {
                max_num = max(max_num, masu[i][j]);
            }
        }
    }

    cout << no_color << endl;
    cout << max_num << endl;

    return 0;
}