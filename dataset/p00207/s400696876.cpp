#include <iostream>
#include <vector>

using namespace std;

vector < vector<int> > hyou(102, vector<int>(102));

void check(int x, int y, int c) {
	int mx[] = {1, 0, -1, 0};
	int my[] = {0, 1, 0, -1};
	for (int i = 0; i < 4; i++) {
		if (hyou[x+mx[i]][y+my[i]] == c) {
			hyou[x+mx[i]][y+my[i]] = 0;
			check(x+mx[i], y+my[i], c);
		}
	}
}

int main() {
	int w, h;
	while (cin >> w >> h) {
		if (w == 0 && h == 0) {
			break;
		}
		for (int i = 0; i < 102; i++) {
			for (int j = 0; j < 102; j++) {
				hyou[i][j] = 0;
			}
		}
		int xs, ys, xg, yg, n;
		int c, d, x, y;
		cin >> xs >> ys >> xg >> yg >> n;
		for (int i = 0; i < n; i++) {
			cin >> c >> d >> x >> y;
			if (d == 0) {
				for (int j = 0; j < 2; j++) {
					for (int k = 0; k < 4; k++) {
						hyou[x+k][y+j] = c;
					}
				}
			} else {
				for (int j = 0; j < 4; j++) {
					for (int k = 0; k < 2; k++) {
						hyou[x+k][y+j] = c;
					}
				}
			}
		}
		if (hyou[xg][yg] != 0 && hyou[xg][yg] == hyou[xs][ys]) {
			check(xs, ys, hyou[xs][ys]);
			if (hyou[xg][yg] == 0) {
				cout << "OK" << endl;
			} else {
				cout << "NG" << endl;
			}
		} else {
			cout << "NG" << endl;
		}
	}
	return 0;
}