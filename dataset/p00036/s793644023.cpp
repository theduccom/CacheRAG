#include <iostream>
#include <string>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)n;i++)

int xb[7][3] = {
	{1, 0, 1},
	{0, 0, 0},
	{1, 2, 3},
	{0, -1, -1},
	{1, 1, 2},
	{0, 1, 1},
	{1, 0, -1}
};

int yb[7][3] = {
	{0, 1, 1},
	{1, 2, 3},
	{0, 0, 0},
	{1, 1, 2},
	{0, 1, 1},
	{1, 1, 2},
	{0, 1, 1}
};

int main() {
	string field[8];
	while(getline(cin, field[0])) {
		for(int i = 1; i < 8; i++) getline(cin, field[i]);

		char ans = '\0';
		rep(y,8) {
			rep(x,8) {
				if(field[y][x] == '1') {
					// cerr << "x: " << x << " " << "y: " << y << endl;
					rep(i,8) {
						bool f = true;
						rep(j,3) {
							int nx = x + xb[i][j];
							int ny = y + yb[i][j];
#if 1
							if(!(0 <= nx && nx < 8 && 0 <= ny && ny < 8 && field[ny][nx] == '1')) {
								f = false;
								break;
							}
#endif
						}
						if(f) {
							ans = 'A' + i;
							goto END;
						}
					}
				}
			}
		}
	END:
		cout << ans << endl;
		getline(cin, field[0]);
	}
	return 0;
}