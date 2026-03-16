#include<cstdio>

int map[12][12];
char c[15];


void f(int x,int y)
{
	map[x][y]=0;
	if(map[x-1][y]==1&&x-1>=0&&12>x-1&&y>=0&&12>y)f(x-1,y);
	if(map[x+1][y]==1&&x+1>=0&&12>x+1&&y>=0&&12>y)f(x+1,y);
	if(map[x][y-1]==1&&x>=0&&12>x&&y-1>=0&&12>y-1)f(x,y-1);
	if(map[x][y+1]==1&&x>=0&&12>x&&y+1>=0&&12>y+1)f(x,y+1);
}


int main()
{
	while(true)
	{
	for(int i=0;i<12;i++)
	{
		if(scanf("%s",c)==EOF)goto end;
		for(int j=0;j<12;j++)
		{
			map[i][j]=c[j]-'0';
		}
	}

	int answer=0;
	for(int i=0;i<12;i++)
	{
		for(int j=0;j<12;j++)
		{
			if(map[i][j]==1)
			{
				answer++;
				f(i,j);
			}
		}
	}
	printf("%d\n",answer);
	}


end:
	return 0;
}