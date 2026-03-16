#include <stdio.h>

int main(void){	
	int x, y;
	int w, h;
	int loop;
	char tile[101][101];


	while(1){
		x = 0;
		y = 0;
		loop = 0;

		for(int i=0; i<101; i++){
			for(int j=0; j<101; j++){
				tile[i][j] = 0;
			}
		}

		scanf("%d %d", &h, &w);
		if(w == 0 && h == 0) break;
		for(int i=0; i<h; i++){
			scanf("%s", tile[i]);
		}

		while(1){
			char c = tile[y][x];
			tile[y][x] = 'x';

			if(c == '>') x++;
			else if(c == '<') x--;
			else if(c == '^') y--;
			else if(c == 'v') y++;
			else if(c == '.') break;
			else{
				loop = 1;
				break;
			}
		}
		if(loop == 0)printf("%d %d\n", x, y);
		else printf("LOOP\n");
	}
	return 0;
}