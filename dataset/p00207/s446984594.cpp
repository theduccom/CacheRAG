#include<iostream>
#include<queue>
using namespace std;
#define MAX_N 1000
int x[MAX_N][MAX_N], y[MAX_N][MAX_N];
int H, W, N, X, Y, C, D, SX, SY, GX, GY;
int main() {
	while (true) {
		cin >> W >> H;
		if (H == 0 && W == 0) { break; }
		cin >> SX >> SY >> GX >> GY >> N;
		for (int i = 0; i < MAX_N; i++) {
			for (int j = 0; j < MAX_N; j++) {
				x[i][j] = 0; y[i][j] = 0;
			}
		}
		for (int i = 0; i < N; i++) {
			cin >> C >> D >> X >> Y;
			if (D == 0) {
				for (int j = Y; j < Y + 2; j++) {
					for (int k = X; k < X + 4; k++) {
						x[j][k] = C;
					}
				}
			}
			if (D == 1) {
				for (int j = Y; j < Y + 4; j++) {
					for (int k = X; k < X + 2; k++) {
						x[j][k] = C;
					}
				}
			}
		}
		queue<pair<int, int> >Q; Q.push(make_pair(SY, SX)); y[SY][SX] = 1;
		while (!Q.empty()) {
			pair<int, int>pa = Q.front(); Q.pop();
			int a1 = pa.first; int a2 = pa.second;
			if (y[a1 - 1][a2] == 0 && a1 - 1 >= 1 && x[a1][a2] == x[a1 - 1][a2]) { y[a1 - 1][a2] = 1; Q.push(make_pair(a1 - 1, a2)); }
			if (y[a1 + 1][a2] == 0 && a1 + 1 <= H && x[a1][a2] == x[a1 + 1][a2]) { y[a1 + 1][a2] = 1; Q.push(make_pair(a1 + 1, a2)); }
			if (y[a1][a2 - 1] == 0 && a2 - 1 >= 1 && x[a1][a2] == x[a1][a2 - 1]) { y[a1][a2 - 1] = 1; Q.push(make_pair(a1, a2 - 1)); }
			if (y[a1][a2 + 1] == 0 && a2 + 1 <= W && x[a1][a2] == x[a1][a2 + 1]) { y[a1][a2 + 1] = 1; Q.push(make_pair(a1, a2 + 1)); }
		}
		if (y[GY][GX] == 1) { cout << "OK" << endl; }
		if (y[GY][GX] == 0) { cout << "NG" << endl; }
	}
	return 0;
}