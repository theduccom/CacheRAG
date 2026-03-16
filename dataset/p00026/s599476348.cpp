#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int peper[15][15];

void paint(int x, int y)
{
	if (x * y >= 0 && x >= 0){
		peper[y][x]++;
	}
}

int main()
{
	int x, y;
	int size;
	
	while (scanf("%d,%d,%d", &x, &y, &size) != EOF){
		peper[y][x]++;

		paint(x, y - 1);
		paint(x, y + 1);
		paint(x - 1, y);
		paint(x + 1, y);

		if (size >= 2){
			paint(x + 1, y - 1);
			paint(x + 1, y + 1);
			paint(x - 1, y + 1);
			paint(x - 1, y - 1);
		}
		if (size == 3){
			paint(x, y - 2);
			paint(x, y + 2);
			paint(x - 2, y);
			paint(x + 2, y);
		}
	}
	int dark = 0;
	int blank = 0;
	
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			if (peper[i][j] == 0)	blank++;
			dark = max(dark, peper[i][j]);
		}
	}
	printf("%d\n%d\n", blank, dark);
	return (0);
}