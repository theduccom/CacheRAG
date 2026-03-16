#include <iostream>
using namespace std;

char field[8][12];
int n, a, b;

void fire(int x, int y){
    field[x][y] = '0';
    for(int i = -3; i <= 3; i++){
        if( x+i >= 0 && x+i < 8 && field[x+i][y] == '1' ) fire(x+i, y);
        if( y+i >= 0 && y+i < 8 && field[x][y+i] == '1' ) fire(x, y+i);
    }
}

int main(){
    string dummy;
    cin >> n;
    for(int m = 1; m <= n; m++){
        getline(cin, dummy);
        for(int i = 0; i < 8; i++){
            cin >> field[i];
        }
        cin >> a >> b;
        fire(b-1, a-1);
        cout << "Data " << m << ":" << endl;
        for(int i = 0; i < 8; i++){
            cout << field[i] << endl;
        }
    }
    return 0;
}