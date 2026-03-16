#include<stdio.h>
int dx[4]={0,-1,0,1},dy[4]={-1,0,1,0},cnt,x,y;
char a[12][13];
void func(int y,int x){
	int i,xx,yy;
	a[y][x]='0';
	for(i=0;i<4;i++){
		xx=x+dx[i]; yy=y+dy[i];
		if(x>=0&&y>=0&&x<12&&y<12&&a[yy][xx]=='1') func(yy,xx);
	}
}
int main(void){
	int i,j;
	while(scanf("%s",&a[0])!=EOF)	{
		for(i=1;i<12;i++) scanf("%s",a[i]);
		cnt=0;
		for(i=0;i<12;i++){
			for(j=0;j<12;j++){
				if(a[i][j]=='1'){
					cnt++;
					func(i,j);
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}