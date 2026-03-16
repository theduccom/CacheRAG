#include <stdio.h>
#include <string.h>

void enq(int x, int y);

int q[64][2];
int head = 0;
int end = 0;

int main(void){
	char map[8][10];
	int n;
	int x, y;

	scanf("%d", &n);


	for(int i=0; i<n; i++){
		fgets(map[0], sizeof(map[0]), stdin);
		fgets(map[0], sizeof(map[0]), stdin);
		head = 0;
		end = 0;

		for(int j=0; j<8; j++){
			fgets(map[j], sizeof(map[j]), stdin);
			map[j][strlen(map[j]) - 1] = '\0';
		}


		scanf("%d %d", &x, &y);
		x--;
		y--;

		map[y][x] = '0';

		enq(x, y);

		while(head != end){
			int hx = q[head][0];
			int hy = q[head][1];
			head++;

			for(int j = hx-3; j <= hx+3; j++){
				if(j >= 0 && j <= 7 && map[hy][j] == '1'){
					map[hy][j] = '0';
					enq(j, hy);
				}
			}
			for(int j = hy-3; j <= hy+3; j++){
				if(j >= 0 && j <= 7 && map[j][hx] == '1'){
					map[hy][j] = '0';
					enq(hx, j);
				}
			}
		}

		printf("Data %d:\n", i+1);
		for(int j=0; j<8; j++){
			printf("%s\n", map[j]);
		}
	}

	return 0;
}

void enq(int x, int y){
	q[end][0] = x;
	q[end][1] = y;
	end++;
}