#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <functional> //sort(A,A.end(),greater<int>());???????????????
#include <queue>
#include <stack>
#include <vector>

#define INF 10 << 10
#define MP make_pair

int map[124][124];
bool map_flg[124][124];
int x_move[] = { 0,0,1,-1 };
int y_move[] = { -1,1,0,0 };

int main() {
	int w, h;

	while (cin >> w >> h && w != 0 && h != 0) {
		memset(map, 0, sizeof(map));
		memset(map_flg, true, sizeof(map_flg));
		int xs, ys;
		int xg, yg;
		int n;

		cin >> xs >> ys >> xg >> yg >> n;

		for (int i = 1; i <= n; ++i) {
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			int x_, y_;
			if (d == 0) {
				x_ = 4;
				y_ = 2;
			}
			else {
				x_ = 2;
				y_ = 4;
			}
			for (int j = y; j < y + y_; ++j) {
				for (int j2 = x; j2 < x + x_; ++j2) {
					map[j][j2] = c;
				}
			}
		}

		if (map[ys][xs] != map[yg][xg]) {
			cout << "NG" << endl;
			continue;
		}

		stack<pair<int, int> > st;
		st.push(MP(xs, ys));
		int m_c = map[ys][xs];
		bool flg = false;
		while (!st.empty()) {
			int x = st.top().first, y = st.top().second;
			st.pop();
			map_flg[y][x] = false;
			for (int i = 0; i < 4; ++i) {
				int x_ = x + x_move[i], y_ = y + y_move[i];
				if (map[y_][x_] == m_c && map_flg[y_][x_]) {
					if (y_ == yg && x_ == xg) {
						flg = true;
						break;
					}
					st.push(MP(x_, y_));
				}
			}
			if (flg) { break; }
		}

		if (flg) { cout << "OK" << endl; }
		else { cout << "NG" << endl; }
	}

	return 0;
}