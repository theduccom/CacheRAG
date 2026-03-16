#include <stdio.h>
#include <string.h>
#define W_MAX 100
#define H_MAX 100
char map[H_MAX+1][W_MAX+1];
char gx,gy;
int solve(int posX,int posY)
{
	if(map[posY][posX]=='x')
		return 0;
	char c=map[posY][posX];
	map[posY][posX]='x';
	if(c=='^')
		return solve(posX,posY-1);
	else if(c=='v')
		return solve(posX,posY+1);
	else if(c=='>')
		return solve(posX+1,posY);
	else if(c=='<')
		return solve(posX-1,posY);
	else if(c=='.'){
		gx=posX;gy=posY;
		return 1;
	}
	return 1;
}
int main(void)
{
	int w,h,k;
	char str[101];
	while(true){
		scanf("%d%d",&h,&w);
		if(h==0||w==0)break;
		for(k=0;k<h;k++)
		{
			scanf("%s",&str);
			strcpy(map[k],str);
		}
		if(solve(0,0)==1)printf("%d %d\n",gx,gy);
		else printf("LOOP\n");
	}
}	