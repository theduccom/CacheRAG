#include <iostream>
#include <string>
#include <cstring>
#define MAX 100
using namespace std;

int X,Y;
bool flg[MAX][MAX];
string map[MAX];
int main() {
	while (cin >> Y >> X, X||Y) {
		for (int i=0; i<Y; i++)
			cin >> map[i];

		memset(flg, 0, sizeof(flg));
		int x=0,y=0;
		bool f=true;
		while (f) {
			if (flg[y][x]) { cout << "LOOP\n"; break; }
			flg[y][x] = true;
			switch (map[y][x]) {
				case '>':
					x++; break;
				case 'v':
					y++; break;
				case '<':
					x--; break;
				case '^':
					y--; break;
				case '.':
					cout << x << ' ' << y << endl;
					f = false;
					break;
			}
		}
	}
	return 0;
}