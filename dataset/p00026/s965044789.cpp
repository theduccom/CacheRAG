#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int size, x, y, coord[20][20] = {0}, noink = 0, max =0;

	while (scanf("%d,%d,%d", &x, &y, &size) != EOF){
		x += 5;
		y += 5;
		coord[x][y]++;
		coord[x - 1][y]++;
		coord[x + 1][y]++;
		coord[x][y - 1]++;
		coord[x][y + 1]++;
		if (size >= 2){
			coord[x - 1][y - 1]++;
			coord[x - 1][y + 1]++;
			coord[x + 1][y - 1]++;
			coord[x + 1][y + 1]++;
			if (size == 3){
				coord[x - 2][y]++;
				coord[x + 2][y]++;
				coord[x][y - 2]++;
				coord[x][y + 2]++;
			}
		}
	}
	
	for (int i = 5; i < 15; i++){
		for (int j = 5; j < 15; j++){
			if (coord[i][j] == 0) noink++;
			if (coord[i][j] > max) max = coord[i][j];
		}		
	}
	cout << noink << endl;
	cout << max << endl;
	return (0);
}