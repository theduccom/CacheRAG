#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

typedef struct _XY {
	int x;
	int y;
} XY;

XY figure[][4] = {
	{{1, 0}, {0, 1}, {1, 1}}, // A
	{{0, 1}, {0, 2}, {0, 3}}, // B
	{{1, 0}, {2, 0}, {3, 0}}, // C
	{{0, 1}, {-1, 1}, {-1, 2}}, // D
	{{1, 0}, {1, 1}, {2, 1}}, // E
	{{0, 1}, {1, 1}, {1, 2}}, // F
	{{1, 0}, {0, 1}, {-1, 1}}, // G
};

string name[7] = {"A", "B", "C", "D", "E", "F", "G"};
int main() {
	int math[8][8];
	char c;
	while (1) {
		memset(math, 0, sizeof(math));
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				c = getchar();
				math[i][j] = c - '0';
			}
			c = getchar();
		}

//		for (int i = 0; i < 8; i++) {
//			for (int j = 0; j < 8; j++) {
//				cout << math[i][j];
//			}
//			cout << endl;
//		}

		XY p;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (math[i][j] == 1) {
					p.x = j;
					p.y = i;
					goto END;
				}
			}
		}

END:
		for (int i = 0; i < 7; i++) {
			if (math[p.y + figure[i][0].y][p.x + figure[i][0].x] == 1 &&
				math[p.y + figure[i][1].y][p.x + figure[i][1].x] == 1 &&
				math[p.y + figure[i][2].y][p.x + figure[i][2].x] == 1 ) {
				cout << name[i] << endl;
				break;
			}
		}

		c = getchar();
		if (c == EOF)
			break;
	}
	return 0;
}