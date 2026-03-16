#include <iostream>
using namespace std;

int main() {
	int W, H;
	while (cin >> W >> H && W+H!= 0) {
        char room[101][101];

        for (int w = 0; w != W; ++w) {
            cin >> room[w];
        }

        int x = 0, y = 0;
        bool loop = false;

        while (room[x][y] != '.') {
            if (room[x][y] == '>') {
                room[x][y] = 'x';
                y++;
            }
            else if (room[x][y] == '<') {
                room[x][y] = 'x';
                y--;
            }
            else if (room[x][y] == '^') {
                room[x][y] = 'x';
                x--;
            }
            else if (room[x][y] == 'v') {
                room[x][y] = 'x';
                x++;
            }
            else if (room[x][y] == 'x') {
                loop = true;
                break;
            }
        }

        if (loop) {
            cout << "LOOP" << endl;
        }
        else {
            cout << y << " " << x << endl;
        }
    }
    return 0;
}