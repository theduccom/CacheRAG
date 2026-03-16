#include <iostream>
#include <cstdio>
using namespace std;

int paper[14][14] = {{0}};

void small(int x, int y) {
	paper[x + 2][y + 1]++;
	paper[x + 1][y + 2]++;
	paper[x + 2][y + 2]++;
	paper[x + 3][y + 2]++;
	paper[x + 2][y + 3]++;
}

void medium(int x, int y) {
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			paper[x + j][y + i]++;
		}
	}
}

void big(int x, int y) {
	paper[x + 2][y]++;
	paper[x][y + 2]++;
	paper[x + 4][y + 2]++;
	paper[x + 2][y + 4]++;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= 3; j++) {
			paper[x + j][y + i]++;
		}
	}
}

int main() {
	int x, y, z, white = 0, con = 0;

	while (scanf("%d,%d,%d", &x, &y, &z) != EOF) {
		if (z == 1) {
			small(x, y);
		}
		else if (z == 2) {
			medium(x, y);
		}
		else if (z == 3) {
			big(x, y);
		}
	}
	for (int i = 2; i < 12; i++) {
		for (int j = 2; j < 12; j++) {
			if (paper[i][j] == 0) {
				white++;
			}
			if (paper[i][j] > con) {
				con = paper[i][j];
			}
		}
	}
	cout << white << endl << con << endl;
}