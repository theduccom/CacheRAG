#include <stdio.h>

char c[13][13];

void saiki(int x, int y){
	c[x][y] = '0';
	if(x > 0){
		if(c[x - 1][y] == '1'){
			saiki(x - 1, y);
		}
	}
	if(x < 11){
		if(c[x + 1][y] == '1'){
			saiki(x + 1, y);
		}
	}
	if(y > 0){
		if(c[x][y - 1] == '1'){
			saiki(x, y - 1);
		}
	}
	if(y < 11){
		if(c[x][y + 1] == '1'){
			saiki(x, y + 1);
		}
	}
}

int main(void)
{
	int ans;
	while(scanf("%s", c[0]) != EOF){
		for(int i = 1; i < 12; i++){
			scanf("%s", c[i]);
		}
		ans = 0;
		for(int i = 0; i < 12; i++){
			for(int j = 0; j < 12; j++){
				if(c[i][j] == '1'){
					ans++;
					saiki(i, j);
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}