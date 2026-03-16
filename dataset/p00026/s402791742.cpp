#include<stdio.h>

int main(void)
{
	int i,j,k,paper[10][10]={0},x,y,n,c=0,max=0;
	
	while(scanf("%d",&x)!=EOF){
		scanf(",%d,%d",&y,&n);
		
		if(n==0)break;
		
		if(n==1){
			if(y-1>=0)paper[y-1][x]++;
			if(y+1<10)paper[y+1][x]++;
			if(x-1>=0)paper[y][x-1]++;
			if(x+1<10)paper[y][x+1]++;
			if(y>=0 && y<10 && x>=0 && x<10)paper[y][x]++;
		}
		if(n==2){
			if(y-1>=0)paper[y-1][x]++;
			if(y+1<10)paper[y+1][x]++;
			if(x-1>=0)paper[y][x-1]++;
			if(x+1<10)paper[y][x+1]++;
			if(y-1>=0 && x-1>=0)paper[y-1][x-1]++;
			if(y-1>=0 && x+1<10)paper[y-1][x+1]++;
			if(y+1<10 && x-1>=0)paper[y+1][x-1]++;
			if(y+1<10 && x+1<10)paper[y+1][x+1]++;
			if(y>=0 && y<10 && x>=0 && x<10)paper[y][x]++;
		}
		if(n==3){
			if(y-1>=0)paper[y-1][x]++;
			if(y+1<10)paper[y+1][x]++;
			if(x-1>=0)paper[y][x-1]++;
			if(x+1<10)paper[y][x+1]++;
			if(y-1>=0 && x-1>=0)paper[y-1][x-1]++;
			if(y-1>=0 && x+1<10)paper[y-1][x+1]++;
			if(y+1<10 && x-1>=0)paper[y+1][x-1]++;
			if(y+1<10 && x+1<10)paper[y+1][x+1]++;
			
			if(y-2>=0)paper[y-2][x]++;
			if(y+2<10)paper[y+2][x]++;
			if(x+2<10)paper[y][x+2]++;
			if(x-2>=0)paper[y][x-2]++;
			if(y>=0 && y<10 && x>=0 && x<10)paper[y][x]++;
		}
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(paper[i][j]==0)c++;
			if(paper[i][j]>=max)max=paper[i][j];
		}
	}
	printf("%d\n%d\n",c,max);
	return 0;
}