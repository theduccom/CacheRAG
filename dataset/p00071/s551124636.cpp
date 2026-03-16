#include <iostream>
#include <queue>
#include <utility>

#define X second
#define Y first

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    int n; cin >> n;
    int cnt = 0;
    while (n--) {
        cnt++;
        int map[8][8] = {0};
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                char tmp; cin >> tmp;
                if (tmp == '0')
                    map[i][j] = 0;
                else
                    map[i][j] = 1;
            }
        }

        queue<pair<int, int> > bomb;
        int x, y; cin >> x >> y;
        bomb.push(make_pair(x-1, y-1));

        while (!bomb.empty()) {
            pair<int, int> l = bomb.front();
            if (map[l.X][l.Y] == 0) {
                bomb.pop();
                continue;
            } else {
                map[l.X][l.Y] = 0;
            }
            for (int i = 0; i < 4; i++) {
                for (int j = 1; j < 4; j++) {
                    x = l.X + (dx[i] * j);
                    y = l.Y + (dy[i] * j);
                    if (0>x || 8<=x || 0>y || 8<=y) {
                        continue;
                    }
                    if (map[x][y]) {
                        if (j != 0) {
                            bomb.push(make_pair(y, x));
                        }
                    } else {
                        continue;
                    }
                }
            }
            bomb.pop();
        }

        cout << "Data " << cnt << ":" << endl;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cout << map[i][j];
            }
            cout << endl;
        }
    }
}