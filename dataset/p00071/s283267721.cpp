#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX_L 8
using namespace std;
typedef pair<int, int> P;
char table[MAX_L + 1][MAX_L + 1];

P next(int x, int y) {
    //上
    for(int r = 1; r <= 3&&y-r>=0; r++) {
        if(table[y-r][x] == '1') {
            return(P(x, y-r));
        }
    }
    //下
    for(int r = 1; r <= 3&&y+r<8; r++) {
        if(table[y+r][x] == '1') {
            return(P(x, y+r));
        }
    }
    //右
    for(int r = 1; r <= 3&&x+r<8; r++) {
        if(table[y][x+r] == '1') {
            return(P(x+r, y));
        }
    }
    //左
    for(int r = 1; r <= 3&&x-r>=0; r++) {
        if(table[y][x-r] == '1') {
            return(P(x-r, y));
        }
    }
    return(P(-1, -1)); //爆弾は巻き込まれなかった
}

//再帰的にtableを更新していく
void solve(int x, int y) {
    table[y][x] = '0'; //爆発した
    P chain;
    while(true) {
        chain = next(x, y);
        if(chain.first == -1 && chain.second == -1) break;
        solve(chain.first, chain.second);
    }
    return;
}

void output() {
    for(int r = 0; r < MAX_L; r++) {
        for(int c = 0; c < MAX_L; c++) {
            cout << table[r][c];
        }
        putchar('\n');
    }
}

int main(void) {
    int num; cin >> num;
    
    for(int r = 0; r < num; r++) {
        //盤面読み込み
        for(int c = 0; c < MAX_L; c++) {
            cin >> table[c];
        }
        //爆発する座標読み込み
        int x, y; cin >> x >> y;
        solve(x - 1, y - 1);
        cout << "Data " << (r + 1) << ":" << endl;
        output();
    }
    return(0);
}