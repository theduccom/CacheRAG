#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class point {
public:
	int color;
	bool used;
	point():color(-1),used(false){}
};
int main() {
	int X, Y;
	int make[][2] = { {2,4},{4,2} };
	while (cin >> X >> Y&&X != 0) {
		vector<vector<point> > map(X + 2, vector<point>(Y + 2));
		int sx, sy, gx, gy;
		cin >> sx >> sy >> gx >> gy;
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i) {
			int color, d, x, y;
			cin >> color >> d >> x >> y;
			for (int dx = 0; dx < make[d][1]; ++dx) {
				for (int dy = 0; dy < make[d][0]; ++dy) {
					map[x + dx][y + dy].color = color;
				}
			}
		}
		stack<pair<int, int> > st;
		if (map[sx][sy].color != -1) {
			st.push(pair<int, int>(sx, sy));
		}
		int mx[] = { 1,0,-1,0 }, my[] = { 0,1,0,-1 };
		while (!st.empty()) {
			pair<int,int> dummy = st.top(); st.pop();
			if (map[dummy.first][dummy.second].used)continue;
			map[dummy.first][dummy.second].used = true;
			for (int i = 0; i < 4; ++i) {
				int x = dummy.first + mx[i];
				int y = dummy.second + my[i];
				if (map[dummy.first][dummy.second].color == map[x][y].color&&map[x][y].used == false) {
					st.push(pair<int, int>(x, y));
				}
			}
		}
		cout << (map[gx][gy].used ? "OK" : "NG") << endl;
	}
	return 0;
}