#include <cstdio>

using namespace std;

const int xform[7][4] = {{0,1,0,1},{0,0,0,0},{0,1,2,3},{0,0,-1,-1},{0,1,1,2},{0,0,1,1},{0,1,0,-1}},
yform[7][4] = {{0,0,1,1},{0,1,2,3},{0,0,0,0},{0,1,1,2},{0,0,1,1},{0,1,1,2},{0,0,1,1}};

int main(void){
	int i, j, k, l, x, y;
	char str[8][9];
	while(scanf("%s",&str[0]) != EOF){
		for(i = 1;i < 8;i++){
			scanf("%s",str[i]);
		}
		for(i = 0;i < 8;i++){
			for(j = 0;j < 8;j++){
				if(str[i][j] == '1'){
					break;
				}
			}
			if(j != 8){
				break;
			}
		}
		x = j, y = i;
		for(i = 0;i < 7;i++){
			for(j = 0;j < 4;j++){
				if(0 > x + xform[i][j] || x + xform[i][j] >= 8 || 0 > y + yform[i][j] || y + yform[i][j] >= 8 || str[y + yform[i][j]][x + xform[i][j]] == '0')
					break;
			}
			if(j == 4){
				break;
			}
		}
		printf("%c\n",'A' + i);
		getchar();
		getchar();
	}
	return 0;
}