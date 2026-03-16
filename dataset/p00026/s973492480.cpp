#include<iostream>
#include<cstdio>

int paper[10][10] = { 0 };
int white = 100, max = 0;

void ink(int x, int y) {
	if (0 <= x && x <= 9 && 0 <= y && y <= 9) {
		if (paper[x][y] == 0) white--;
		paper[x][y] += 1;
		max = paper[x][y] > max ? paper[x][y] : max;
	}
}

int main() {
	int x, y, s;
	while (std::scanf("%d,%d,%d", &x, &y, &s) != EOF) {
		if (s >= 3) {
			ink(x - 2, y);
			ink(x + 2, y);
			ink(x, y - 2);
			ink(x, y + 2);
		}
		if (s >= 2) {
			ink(x - 1, y - 1);
			ink(x - 1, y + 1);
			ink(x + 1, y - 1);
			ink(x + 1, y + 1);
		}
		ink(x, y);
		ink(x - 1, y);
		ink(x + 1, y);
		ink(x, y - 1);
		ink(x, y + 1);
	}
	std::cout << white << std::endl << max << std::endl;
	return 0;
}
