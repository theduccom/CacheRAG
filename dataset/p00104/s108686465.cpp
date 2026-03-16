#include<iostream>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)
int main() {
	int h, w;
	while (cin >> h >> w, h, w) {
		char map[114][514];
		bool b[114][514] = {};
		rep(i, h)rep(j, w)cin >> map[i][j];
		int x = 1, y = 1;
		rep(i, 10010) {
			if (b[x][y]) { cout << "LOOP\n"; goto end; }
			b[x][y] = true;
			if (map[x][y] == '>')y++;
			else if (map[x][y] == '<')y--;
			else if (map[x][y] == '^')x--;
			else if (map[x][y] == 'v')x++;
			else {
				cout << --y << ' ' << --x << endl;
				goto end;
			}
		}
	end:;
	}
}