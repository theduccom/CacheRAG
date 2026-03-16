#include <stdio.h>
char map[20][20];
int ans = 0;

void dps(int x, int y);

int main(void){
	while(scanf("%s", map[0]) != EOF){
		ans = 0;
		for(int i=1; i<12; i++){
			scanf("%s", map[i]);
		}

		for(int i=0; i<12; i++){

			for(int j=0; j<12; j++){
				if(map[i][j] == '1'){
					map[i][j] = '3';
					ans++;
					if(j+1 < 12) dps(i, j+1);
					if(j-1 >= 0) dps(i, j-1);
					if(i+1 < 12) dps(i+1, j);
					if(i-1 >= 0) dps(i-1, j);
				}
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}

void dps(int y, int x){
	if(map[y][x] == '1'){
		map[y][x] = '0';
		if(x+1 < 12) dps(y, x+1);
		if(x-1 >= 0) dps(y, x-1);
		if(y+1 < 12) dps(y+1, x);
		if(y-1 >= 0) dps(y-1, x);
	}
}