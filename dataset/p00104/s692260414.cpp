#include <iostream>

using namespace std;

int main() {
    int h, w;
    char c;
    char map_[101][101];
    while (true) {
        cin >> h >> w;
        if (w == 0) {
            break;
        }
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                cin >> map_[j][i];
            }
        }
        int x = 0;
        int y = 0;
        while (true) {
            if (map_[x][y] == '.') {
                cout << x << ' ' << y << endl;
                break;
            }
            if (map_[x][y] == 'L') {
                cout << "LOOP" << endl;
                break;
            }
            c = map_[x][y];
            map_[x][y] = 'L';
            switch (c) {
                case '>':
                    x++;
                    break;
                case '<':
                    x--;
                    break;
                case 'v':
                    y++;
                    break;
                case '^':
                    y--;
                    break;
            }
        }
    }
    return 0;
}