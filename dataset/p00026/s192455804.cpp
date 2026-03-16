#include <stdio.h>

int main()
{
	int ans1 = 0;
	int ans2 = 0;
	int x,y,size;
	int paper[14][14];
	for(int i = 0; i < 14; i++){
		for(int j = 0; j < 14; j++){
			paper[i][j] = 0;
		}
	}
	while(scanf("%d,%d,%d",&x,&y,&size) != EOF){
		paper[x + 2][y + 2] ++;
		paper[x + 1][y + 2] ++;
		paper[x + 2][y + 1] ++;
		paper[x + 3][y + 2] ++;
		paper[x + 2][y + 3] ++;
		if(size > 1){
			paper[x + 1][y + 3] ++;
			paper[x + 1][y + 1] ++;
			paper[x + 3][y + 1] ++;
			paper[x + 3][y + 3] ++;
		}
		if(size > 2){
			paper[x + 2][y + 4] ++;
			paper[x + 2][y] ++;
			paper[x + 4][y + 2] ++;
			paper[x][y + 2] ++;
		}
	}
	for(int i = 2; i < 12; i++){
		for(int j = 2; j < 12; j++){
			if(paper[i][j] == 0){
				ans1++;
			}
			if(ans2 < paper[i][j]){
				ans2 = paper[i][j];
			}

		}
	}
	printf("%d\n%d\n",ans1,ans2);
	return 0;
}