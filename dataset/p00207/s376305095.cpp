#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<tuple>
#include<utility>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<iomanip>
#include<map>
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
const int INF = 1e9 + 7;
int dx[8] = { 1,0,-1,0,1,1,-1,-1 };
int dy[8] = { 0,1,0,-1,1,-1,1,-1 };

int h, w;
int sy, sx, gy, gx;
int n;
int s[105][105] = { 0 };
int color;

void dfs(int y, int x) {

	s[y][x] = 10;

	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (0 <= ny && ny < h && 0 <= nx && nx < w && s[ny][nx] == color) {
			dfs(ny, nx);
		}
	}

	return;
}



int main() {

	while (cin >> w >> h) {
		if (w == 0)break;


		cin >> sx >> sy >> gx >> gy;
		sx--, sy--, gx--, gy--;

		cin >> n;

		int c[200], d[200], x[200], y[200];

		for (int i = 0; i < n; i++) {
			cin >> c[i] >> d[i] >> x[i] >> y[i];
			x[i]--, y[i]--;
		}

		for (int i = 0; i < n; i++) {
			if (d[i] == 0) {
				for (int j = 0; j < 4; j++) {
					for (int k = 0; k < 2; k++) {
						s[y[i] + k][x[i] + j] = c[i];
					}
				}
			}
			else {
				for (int j = 0; j < 2; j++) {
					for (int k = 0; k < 4; k++) {
						s[y[i] + k][x[i] + j] = c[i];
					}
				}

			}
		}

		color = s[sy][sx];

		dfs(sy, sx);


		

		if (s[gy][gx] == 10) {
			cout << "OK" << endl;
		}

		else {
			cout << "NG" << endl;
		}

		for (int i = 0; i < 105; i++) {
			for (int j = 0; j < 105; j++) {
				s[i][j] = 0;
			}
		}
	}

	return 0;
}

