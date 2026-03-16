#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

typedef pair<int, int> P;

int main() {
	int H, W;
	while (cin >> H >> W && H && W) {
		string *field = new string[H];
		for (int i = 0; i < H; i++)
			cin >> field[i];
		int x = 0, y = 0;
		vector<P> v;
		while (1) {
			v.push_back(make_pair(x, y));
			if (field[y][x] == '>')
				x++;
			if (field[y][x] == '<')
				x--;
			if (field[y][x] == '^')
				y--;
			if (field[y][x] == 'v')
				y++;
			if (field[y][x] == '.') {
				cout << x << " " << y << endl;
				break;
			}
			int loop = 0;
			vector<P>::iterator it = v.begin();
			while (it != v.end()) {
				if (it->first == x && it->second == y) {
					cout << "LOOP" << endl;
					loop = 1;
					break;
				}
				it++;
			}
			if (loop)
				break;
		}
		delete[] field;
	}
	return 0;
}