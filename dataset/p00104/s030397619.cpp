#include<stdio.h>


char masu[101][101];
int H,W,x,y;



int main()
{
	int i,j;
	int f,t1,t2;
	char temp;
	
	for(;;){
		x=0;
		y=0;
		f=0;
		
		scanf("%d %d", &H, &W);
		if(H==0)break;
		scanf("%c",&temp);
		
		for(i=0;i<H;i++){
			for(j=0;j<W+1;j++){
				scanf("%c",&masu[i][j]);
			}
		}
		for(;;){
			if(masu[y][x]==','){
				f=1;
				break;
			}
			t1=x;
			t2=y;
			if(masu[y][x]=='>')x++;
			else if(masu[y][x]=='<')x--;
			else if(masu[y][x]=='v')y++;
			else if(masu[y][x]=='^')y--;
			else if(masu[y][x]=='.')break;
			masu[t2][t1]=',';
		}
		if(f==1)puts("LOOP");
		else printf("%d %d\n",x,y);
	}
	return 0;
}