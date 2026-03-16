#include <stdio.h>

int main(void){
	int i, j;
	int x, y;
	int w, h;
	char tile[128][128];
	int tile2[128][128];
	
	while (scanf("%d %d", &h, &w), h != 0 || w != 0){
		for (i = 0; i < h; i++){
			scanf("%s", tile[i]);
			for (j = 0; j < w; j++){
				tile2[i][j] = 0;
			}
		}
		
		x = 0; y = 0;
		while (tile[x][y] != '.' && tile2[x][y] < 2){
			tile2[x][y]++;
			if (tile[x][y] == '^') x--;
			if (tile[x][y] == 'v') x++;
			if (tile[x][y] == '>') y++;
			if (tile[x][y] == '<') y--;
		}
		
		if (tile2[x][y] > 1) printf("LOOP\n");
		else printf("%d %d\n", y, x);
		
	}
	return (0);
}