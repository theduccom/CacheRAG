#include"stdio.h"
#include"stdlib.h"
#include"queue"
#include"map"
#include"iostream"
#include"string.h"
#include"algorithm"
using namespace std;
struct mmm
{
	char kk[10];
	int x,sum;
}vv;
char xx[10];
int minn = 0;
char ww[10] = {"01234567"};
int dir[8][3] = {{1,4},{0,2,5},{1,3,6},{2,7},{0,5},{1,4,6},{2,5,7},{3,6}};
map <string,int> mp;
void bfs(int x1)
{
	queue <mmm> qq;
	vv.x = 0;
	vv.sum = 0;
	strcpy(vv.kk,ww);
	qq.push(vv);
	int l = 0;
	while(!qq.empty())
	{
		vv = qq.front();
		qq.pop();
		char yy[10];
		strcpy(yy,vv.kk);
		if(l && strcmp(yy,ww) == 0) continue;
		if(mp[yy]) continue;
		l ++;
		mp[yy] = vv.sum;
		int x0 = vv.x;
		int sum0 = vv.sum;
		if(x0 == 0 || x0 == 3 || x0 == 4 || x0 == 7)
		{
			for(int i = 0;i < 2;i ++)
			{
				vv.x = dir[x0][i];
				swap(vv.kk[vv.x],vv.kk[x0]);
				vv.sum = sum0 + 1;
				qq.push(vv);
				swap(vv.kk[vv.x],vv.kk[x0]);
			}
		}
		else
		{
			for(int i = 0;i < 3;i ++)
			{
				vv.x = dir[x0][i];
				swap(vv.kk[vv.x],vv.kk[x0]);
				vv.sum = sum0 + 1;
				qq.push(vv);
				swap(vv.kk[vv.x],vv.kk[x0]);
				//strcpy(vv.kk,yy);
			}
		}
	}
}
int main()
{
	int a,b,c,d;
	int pp[10];
	bfs(0);
//	freopen("ooo.txt","r",stdin);
//	freopen("out1.txt","w",stdout);
	while(~scanf("%d",&pp[0]))
	{
		xx[0] = pp[0] + '0';
		if(!pp[0]) b = 0;
		for(int i = 1;i < 8;i ++)
		{
			scanf("%d",&pp[i]);
			xx[i] = pp[i] + '0';
			if(!pp[i])
			{
				b = i;
			}
		}
		xx[8] = '\0';
		minn = 0;
		printf("%d\n",mp[xx]);
	}
	return 0;
}