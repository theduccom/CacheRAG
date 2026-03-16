#include<iostream>
using namespace std;

int main() {
	int p[14][14] = {};
	int x, y, s;
	int ca = 0;
	int a = 0;
	while (scanf("%d,%d,%d", &x, &y, &s) + 1) {
		if (s == 1) {
			p[x + 2][y + 2] += 1;
			p[x + 3][y + 2] += 1;
			p[x + 2][y + 1] += 1;
			p[x + 2][y + 3] += 1;
			p[x + 1][y + 2] += 1;
		}

		if (s == 2) {
			p[x + 2][y + 2] += 1;
			p[x + 3][y + 2] += 1;
			p[x + 2][y + 1] += 1;
			p[x + 2][y + 3] += 1;
			p[x + 1][y + 2] += 1;
			p[x + 3][y + 3] += 1;
			p[x + 3][y + 1] += 1;
			p[x + 1][y + 1] += 1;
			p[x + 1][y + 3] += 1;
		}

		if (s == 3) {
			p[x + 2][y + 2] += 1;
			p[x + 3][y + 2] += 1;
			p[x + 2][y + 1] += 1;
			p[x + 2][y + 3] += 1;
			p[x + 1][y + 2] += 1;
			p[x + 3][y + 3] += 1;
			p[x + 3][y + 1] += 1;
			p[x + 1][y + 1] += 1;
			p[x + 1][y + 3] += 1;
			p[x + 4][y + 2] += 1;
			p[x][y + 2] += 1;
			p[x + 2][y + 4] += 1;
			p[x + 2][y] += 1;
		}
	}
	a = p[2][2];
	for (int i = 2; i < 12; i++) {
		for (int j = 2; j < 12; j++) {
			if (p[i][j] == 0) {
				ca++;
			}
			if (p[i][j] > a) {
				a = p[i][j];
			}
		}
	}
	cout << ca << endl << a << endl;
}