#include<stdio.h>
void tyu(int x,int y,int N[15][15])
{
	int xt,yt;
	xt=x-1;yt=y-1;
	for(int i=yt;i<=yt+2;i++)
		for(int j=xt;j<=xt+2;j++)
			N[i][j]++;
}
void syo(int x,int y,int N[15][15])
{
	N[y][x]++;N[y+1][x]++;N[y-1][x]++;
	N[y][x+1]++;N[y][x-1]++;
}
void dai(int x,int y,int N[15][15])
{
	int xt,yt;
	xt=x-1;yt=y-1;
	for(int i=yt;i<=yt+2;i++)
		for(int j=xt;j<=xt+2;j++)
			N[i][j]++;
	N[y+2][x]++;N[y-2][x]++;
	N[y][x+2]++;N[y][x-2]++;
}

int main()
{
	int x,y,z,PP[15][15]={},xt=0,yt=0;
	while(scanf("%d,%d,%d",&x,&y,&z)!=EOF)
	{
		xt=x+2;yt=y+2;
		if(z==1)syo(xt,yt,PP);
		else if(z==2)tyu(xt,yt,PP);
		else if(z==3)dai(xt,yt,PP);
	}
	int SUM1=0,SUM2=0,max=0;
	for(int i=2;i<12;i++){
		for(int j=2;j<12;j++){
			if(PP[i][j]==0)SUM1++;
			if(PP[i][j]>max){max=PP[i][j];SUM2=1;}
			else if(PP[i][j]==max)SUM2++;
		}
	}
	printf("%d\n%d\n",SUM1,max);

	return 0;
}