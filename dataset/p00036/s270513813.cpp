#include    <iostream>
#include    <vector>

using namespace std;

struct pos {
    int x;  // x座標
    int y;  // y座標
};

int main() {
    // 黒マスで表される部分の座標リスト
    const struct pos fig[7][3] = {
        { {1,0}, {0,1}, {1,1} },    // A
        { {0,1}, {0,2}, {0,3} },    // B
        { {1,0}, {2,0}, {3,0} },    // C
        { {0,1}, {-1,1}, {-1,2} },  // D
        { {1,0}, {1,1}, {2,1} },    // E
        { {0,1}, {1,1}, {1,2} },    // F
        { {1,0}, {0,1}, {-1,1} },   // G
    };
    // マップの領域
    char map[12][12];

    while(1) {
        // マップのリフレッシュ
        for(int y = 0; y < 12; y++) {
            for(int x = 0; x < 12; x++) {
                if(1 >= x && x <= 8 && 1 >= y && y <= 8)    map[x][y] = '0';
                else                                        map[x][y] = '2';
            }
        }

        // データ入力
        bool flag = true;
        struct pos fst;
        for(int y = 0; y < 8; y++) {
            for(int x = 0; x < 8; x++) {
                cin >> map[1+x][1+y];
                if(flag && map[1+x][1+y] == '1') { fst.x = x; fst.y = y; flag = false; }
            }
        }
        if(cin.eof()) {break;}
        
        // 走査
        // あらかじめ最初の1の入力箇所を把握しておく事で、1の出現箇所の探索回数を改善している。
        for(int i = 0; i < 7; i++) {
            if(     map[1+fst.x+fig[i][0].x][1+fst.y+fig[i][0].y] == '1'
                &&  map[1+fst.x+fig[i][1].x][1+fst.y+fig[i][1].y] == '1'
                &&  map[1+fst.x+fig[i][2].x][1+fst.y+fig[i][2].y] == '1')
                {
                cout << (char)('A' + i) << endl;
                break;
            }
        }
    }
    return 0;
}
