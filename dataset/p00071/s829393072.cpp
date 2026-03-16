#include <iostream>
#include <string>
using namespace std;

char field[8][8];

void bomb(int X, int Y) {
    field[Y][X] = '0';
    for(int i = 0; i < 4; ++i) {
        //右側を爆破
        if(X + i < 8 && field[Y][X + i] == '1') bomb(X + i, Y);
        if(Y + i < 8 && field[Y + i][X] == '1') bomb(X, Y + i);
        if(X - i > -1 && field[Y][X - i] == '1') bomb(X - i, Y);
        if(Y - i > -1 && field[Y - i][X] == '1') bomb(X, Y - i);
    }
}

int main(void) {
    int n;
    cin >> n;
    
    for(int k = 0; k < n; ++k) {
        int X, Y;
        for(int i = 0; i < 8; ++i) {
            cin >> field[i];
        }
        cin >> X;
        cin >> Y;
        
        bomb(X - 1, Y - 1);
        
        cout << "Data " << k + 1 << ':' << endl;
        for(int y = 0; y < 8; ++y) {
            for(int x = 0; x < 8; ++x) {
                cout << field[y][x];
            }
            cout << endl;
        }
    }
    
    return 0;
}
