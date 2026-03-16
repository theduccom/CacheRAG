#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int paper[10][10];

void printv() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%2d", paper[i][j]);
		}
		printf("\n");
	}
	printf("---------------------------\n");
}

int main() {
	int x, y, size;
	int blank = 0, depth = 0;
	int dx[] = { 1, -1,  0,  0,  1, -1,  1, -1,  2, -2,  0,  0};
	int dy[] = { 0,  0,  1, -1,  1, -1, -1,  1,  0,  0,  2, -2};

	memset(paper, 0, sizeof(paper));
	while (scanf("%d,%d,%d", &x, &y, &size) != EOF) {
		int i;
		paper[y][x] += 1;
		switch (size) {
			case 3:
				for (i = 8; i < 12; i++)
					if (x + dx[i] >= 0 && x + dx[i] <= 9 &&
						y + dy[i] >= 0 && y + dy[i] <= 9 )
						paper[y + dy[i]][x + dx[i]] += 1;
			case 2:
				for (i = 4; i < 8; i++)
					if (x + dx[i] >= 0 && x + dx[i] <= 9 &&
						y + dy[i] >= 0 && y + dy[i] <= 9 )
						paper[y + dy[i]][x + dx[i]] += 1;
			case 1:
				for (i = 0; i < 4; i++)
					if (x + dx[i] >= 0 && x + dx[i] <= 9 &&
						y + dy[i] >= 0 && y + dy[i] <= 9 )
						paper[y + dy[i]][x + dx[i]] += 1;
				break;
		}
//		printv();
	}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (paper[i][j] == 0)
				blank++;
			else
				depth = max(depth, paper[i][j]);
	printf("%d\n", blank);
	printf("%d\n", depth);
	return 0;
}