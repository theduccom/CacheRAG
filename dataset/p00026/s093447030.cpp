#include <stdio.h>
#define H 14

int main(void){
	int b[H][H];
	int x, y, s;
	int w=0, h=0;
	for(int i=0; i<H; ++i){
		for(int j=0; j<H; ++j){
			b[i][j] = 0;
		}
	}

	while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
		x += 2;
		y += 2;
		switch(s){
		case 3:
			b[x][y-2]++;
			b[x-2][y]++;
			b[x+2][y]++;
			b[x][y+2]++;
		case 2:
			b[x-1][y-1]++;
			b[x+1][y-1]++;
			b[x-1][y+1]++;
			b[x+1][y+1]++;
		case 1:
			b[x][y-1]++;
			b[x-1][y]++;
			b[x][y]++;
			b[x+1][y]++;
			b[x][y+1]++;
			break;
		}
	}

	for(int i=2; i< H-2; ++i){
		for(int j=2; j<H-2; ++j){
			if(b[i][j] == 0){
				w++;
			}else if(h < b[i][j]){
				h = b[i][j];
			}
		}
	}
	printf("%d\n%d\n", w, h);

	return 0;
}