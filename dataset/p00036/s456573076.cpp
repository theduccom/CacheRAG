#include <iostream>

using namespace std;

int main()
{
    char fg[8][8];

    while (cin >> fg[0][0]) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++) {
                if (!i && !j)
                    continue;
                cin >> fg[i][j];
            }

        int x, y;
        bool flag = false;
        for (y = 0; y < 8; y++) {
            for (x = 0; x < 8; x++)
                if (fg[y][x] == '1') {
                    flag = true;
                    break;
                }
            if (flag)
                break;
        }

        if (fg[y][x + 1] == '1') {
            if (fg[y][x + 2] == '1') 
                cout << "C\n";
            else if (fg[y + 1][x + 2] == '1') 
                cout << "E\n";
            else if (fg[y + 1][x - 1] == '1') 
                cout << "G\n";
            else 
                cout << "A\n";
        }
        else if (fg[y + 2][x] == '1')
            cout << "B\n";
        else if (fg[y + 1][x - 1] == '1')
            cout << "D\n";
        else 
            cout << "F\n";
    }

    return 0;
}