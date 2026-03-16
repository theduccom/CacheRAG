#include<stdio.h>
int main(void)
{
	int h,w;
	int i,j;
	char map[101][101];
	int flg[101][101];
	
	scanf("%d %d",&h,&w);
	while(h!=0 && w!=0){
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				flg[i][j]=0;
			}
		}
		for(i=0;i<h;i++){
			for(j=0;j<w;j++){
				scanf(" %c",&map[i][j]);
			}
		}
		i=0;
		j=0;
		while(1){
			if(map[i][j]=='.' || flg[i][j]==1){
				break;
			}
			else if(map[i][j]=='>'){
				flg[i][j]=1;
				j++;
			}
			else if(map[i][j]=='<'){
				flg[i][j]=1;
				j--;
			}
			else if(map[i][j]=='^'){
				flg[i][j]=1;
				i--;
			}
			else if(map[i][j]=='v'){
				flg[i][j]=1;
				i++;
			}
		}
		if(flg[i][j]==1){
			printf("LOOP\n");
		}
		else {
			printf("%d %d\n",j,i);
		}
		scanf("%d %d",&h,&w);
	}
	return 0;
}