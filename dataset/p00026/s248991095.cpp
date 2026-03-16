#include <cstdio>
#include <cstring>
#include <cstdlib>

char *inputStr(char *str, int len) {
	char *rtn;
	if ((rtn = fgets(str, len, stdin)) == NULL) { return NULL; }
	if (str[(len = (strnlen(str, len) - 1))] == '\n') {
		str[len] = '\0';
	} else {
		fflush(stdin);
	}
	return rtn;
}

int inputXYS(int &x, int &y, int &siz) {
	char str[8], *ptok;
	if (inputStr(str, sizeof(str) / sizeof(str[0])) == NULL) { return 1; }
	if ((ptok = strtok(str, ",")) != NULL) {
		x = atoi(ptok);
		if ((ptok = strtok(NULL, ",")) != NULL) {
			y = atoi(ptok);
			if ((ptok = strtok(NULL, ",")) != NULL) {
				siz = atoi(ptok);
			} else {
				return 1;
			}
		} else {
			return 1;
		}
	} else {
		return 1;
	}
	return 0;
}

int main() {
	int bitmap[10][10], max = 0;
	int white = 10 * 10;
	int cx, cy, size, mx, my, i;
	static const int inkX[] = {0,1,0,-1,0,1,-1,-1,1,2,0,-2,0};
	static const int inkY[] = {0,0,1,0,-1,1,1,-1,-1,0,2,0,-2};
	static const int inkN[] = {5, 9, 13};
	for (cx = 0; cx < 10; ++cx) {
		for (cy = 0; cy < 10; ++cy) {
			bitmap[cy][cx] = 0;
		}
	}
	while (inputXYS(cx, cy, size) == 0) {
		for (i = 0; i < inkN[size - 1]; ++i) {
			mx = cx + inkX[i];
			my = cy + inkY[i];
			if (mx < 0 || mx >= 10 || my < 0 || my >= 10) { continue; }
			if (bitmap[my][mx] == 0) {
				--white;
			}
			++bitmap[my][mx];
			if (bitmap[my][mx] > max) {
				max = bitmap[my][mx];
			}
		}
	}
	printf("%d\n%d\n", white, max);
	return 0;
}