#include <stdio.h>
#include <string.h>

int main(void)
{
	char field[102][102];
	int h, w;
	char come[102][102];
	
	while (1){
		int x, y;
		
		scanf("%d%d", &h, &w);
		
		if (h == 0){
			break;
		}
		
		memset(come, 0, sizeof(come));
		
		for (int i = 0; i < h; i++){
			scanf("%s", field[i]);
		}
		
		
		x = y = 0;
		while (come[y][x] == 0 && field[y][x] != '.'){
			come[y][x] = 1;
			
			switch (field[y][x]){
			  case '>':
			  	x++;
				break;
			  case '<':
			  	x--;
				break;
			  case '^':
			  	y--;
				break;
			  case 'v':
			  	y++;
				break;
			}
		}
		
		
		if (come[y][x] == 1){
			puts("LOOP");
		}
		else {
			printf("%d %d\n", x, y);
		}
	}
	
	return (0);
}