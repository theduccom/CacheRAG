#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <queue>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<int,int> 
#define ff first
#define ss second
#define ll long long 
#define vi vector<int>

using namespace std;

int paper[12][12];

int x,y,d,hasil,maxs;

/*int small()
{
	printf("small ");
	if(x-1>=0)
	paper[x-1][y]++;
	if(x+1<10)
	paper[x+1][y]++;
	if(y-1>=0)
	paper[x][y-1]++;
	if(y+1<10)
	paper[x][y-1]++;
}
int medium()
{
	printf("medium ");
	if(x-1>=0&&y-1>=0)
	paper[x-1][y-1]++;
	if(x+1<10&&y+1<10)
	paper[x+1][y+1]++;
	if(x-1>=0&&y+1<10)
	paper[x-1][y+1]++;
	if(x+1<10&&y-1>10)
	paper[x+1][y-1]++;
}
int large()
{
	printf("large ");
	if(x-2>=0)
	paper[x-2][y]++;
	if(x+2<10)
	paper[x+2][y]++;
	if(y-2>=0)
	paper[x][y-2]++;
	if(y+2<10)
	paper[x][y-2]++;
}*/

int main()
{
	memset(paper, 0, sizeof(paper[0][0]) *12 *12);
	hasil=0;
	maxs=0;
	while(scanf("%d,%d,%d",&x,&y,&d)!=EOF)
	{
		/*if(x==0&&y==0&&d==0)
		{
			break;
		}*/
		if(d==1)
		{
			//printf("s");
			//small;
			paper[x][y]++;
			if(x-1>=0)
			paper[x-1][y]++;
			if(x+1<10)
			paper[x+1][y]++;
			if(y-1>=0)
			paper[x][y-1]++;
			if(y+1<10)
			paper[x][y+1]++;
		}
		else if(d==2)
		{
			//printf("m");
			//small;
			//medium;	
			paper[x][y]++;
			if(x-1>=0)
			paper[x-1][y]++;
			if(x+1<10)
			paper[x+1][y]++;
			if(y-1>=0)
			paper[x][y-1]++;
			if(y+1<10)
			paper[x][y+1]++;
			if(x-1>=0&&y-1>=0)
			paper[x-1][y-1]++;
			if(x+1<10&&y+1<10)
			paper[x+1][y+1]++;
			if(x-1>=0&&y+1<10)
			paper[x-1][y+1]++;
			if(x+1<10&&y-1>=0)
			paper[x+1][y-1]++;
		}
		else if(d==3)
		{
			//printf("l");
			//small;
			//medium;
			//large;
			paper[x][y]++;
			if(x-1>=0)
			paper[x-1][y]++;
			if(x+1<10)
			paper[x+1][y]++;
			if(y-1>=0)
			paper[x][y-1]++;
			if(y+1<10)
			paper[x][y+1]++;
			if(x-1>=0&&y-1>=0)
			paper[x-1][y-1]++;
			if(x+1<10&&y+1<10)
			paper[x+1][y+1]++;
			if(x-1>=0&&y+1<10)
			paper[x-1][y+1]++;
			if(x+1<10&&y-1>=0)
			paper[x+1][y-1]++;
			if(x-2>=0)
			paper[x-2][y]++;
			if(x+2<10)
			paper[x+2][y]++;
			if(y-2>=0)
			paper[x][y-2]++;
			if(y+2<10)
			paper[x][y+2]++;
		}
		/*for(int b=0;b<10;b++)
		{
		for(int k=0;k<10;k++)
		{
			printf("%d ",paper[k][b]);
		}
		printf("\n");
		}*/
	}
	for(int b=0;b<10;b++)
	{
		for(int k=0;k<10;k++)
		{
			if(paper[k][b]==0)
			{
				hasil++;	
			}
			maxs=max(maxs,paper[k][b]);
			//printf("%d ",paper[k][b]);
		}
		//printf("\n");
	}
	printf("%d\n%d\n",hasil,maxs);
	return 0;
}