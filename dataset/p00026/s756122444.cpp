#include <stdio.h>

int main(void)
{
	int x,y;
	int i, j;
	int n;
	int size;
	int god[10][10];
	int space;
	int mn;
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			god[i][j] = 0;
		}
	}
	
	while (scanf("%d,%d,%d", &x, &y, &size) != EOF){
		if (size == 1){
			n = 1;
			god[x][y]++;
			for (i = 0; i < 2; i++){
				if (x + n >= 0 && x + n < 10){
					god[x + n][y]++;
				}
				if (y + n >= 0 && y + n < 10){
					god[x][y + n]++;
				}
				n = -1;
			}
		}
		if (size == 2){
			n = 1;
			god[x][y]++;
			for (i = 0; i < 2; i++){
				if (x + n >= 0 && x + n < 10){
					god[x + n][y]++;
				}
				if (y + n >= 0 && y + n < 10){
					god[x][y + n]++;
				}
				if (x + n >= 0 && x + n < 10 && y + n >= 0 && y + n < 10){
					god[x + n][y + n]++;
				}
				if (x + n >= 0 && x + n < 10 && y - n >= 0 && y - n < 10){
					god[x + n][y - n]++;
				}
				n = -1;
			}
		}
		if (size == 3){
			n = 1;
			god[x][y]++;
			for (i = 0; i < 2; i++){
				if (x + n >= 0 && x + n < 10){
					god[x + n][y]++;
				}
				if (y + n >= 0 && y + n < 10){
					god[x][y + n]++;
				}
				if (x + n >= 0 && x + n < 10 && y + n >= 0 && y + n < 10){
					god[x + n][y + n]++;
				}
				if (x + n >= 0 && x + n < 10 && y - n >= 0 && y - n < 10){
					god[x + n][y - n]++;
				}
				
				if (x + n * 2 >= 0 && x + n * 2 < 10){
					god[x + n * 2][y]++;
				}
				if (y + n * 2 >= 0 && y + n * 2 < 10){
					god[x][y + n * 2]++;
				}
				n = -1;
			}
		}
	}
	space = 0;
	mn = 0;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (god[i][j] == 0){
				space++;
			}
			if (mn < god[i][j]){
				mn = god[i][j];
			}
		}
	}
	
	printf("%d\n%d\n", space, mn);
	
	return (0);
}