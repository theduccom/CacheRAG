#include <bits/stdc++.h>

using namespace std;

int h, w;
char field[100][101];

void solve(int x, int y){

    switch(field[y][x]){

        case '>':
            field[y][x] = 'x';
            solve(x + 1, y);
            return;

        case '<':
            field[y][x] = 'x';
            solve(x - 1, y);
            return;

        case '^':
            field[y][x] = 'x';
            solve(x, y - 1);
            return;

        case 'v':
            field[y][x] = 'x';
            solve(x, y + 1);
            return;

        case '.':
            cout << x << ' ' << y << endl;
            return;

        case 'x':
            cout << "LOOP" << endl;
            return;

    }

}

int main(){

    while(cin >> h >> w, h | w){

        for(int i = 0; i < h; ++i){
            for(int j = 0; j < w; ++j){
                cin >> field[i][j];
            }
        }

        solve(0, 0);

    }

}