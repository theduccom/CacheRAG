#include <bits/stdc++.h>

using namespace std;

int main()
{
    string f[8];
    while (cin >> f[0]) {
        for (int i = 1; i < 8; i++) {
            cin >> f[i];
        }

        int num = -1;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (f[i][j] == '0') continue;
                
                if (i + 1 < 8 && j + 1 < 8) {                    
                    if (f[i][j+1] == '1' &&
                        f[i+1][j] == '1' && f[i+1][j+1] == '1') {
                        num = 0;
                        break;
                    }
                }
                
                if (i + 3 < 8) {
                    if (f[i+3][j] == '1') {
                        num = 1;
                        break;
                    }
                }
                
                if (j + 3 < 8) {
                    if (f[i][j+3] == '1') {
                        num = 2;
                        break;
                    }
                }
                
                if (i + 2 < 8 && j - 1 >= 0) {
                    if (f[i+2][j-1] == '1') {
                        num = 3;
                        break;
                    }
                }

                if (i + 1 < 8 && j + 2 < 8) {
                    if (f[i+1][j+2] == '1') {
                        num = 4;
                        break;
                    }
                }

                if (i + 2 < 8 && j + 1 < 8) {
                    if (f[i+2][j+1] == '1') {
                        num = 5;
                        break;
                    }
                }

                if (i + 1 < 8 && j - 1 >= 0) {
                    if (f[i+1][j-1] == '1') {
                        num = 6;
                        break;
                    }
                }
            }
            if (num != -1) break;
        }
        cout << (char)('A' + num) << endl;
    }
    return 0;
}