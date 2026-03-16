#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <cstring>
#include <cmath>
using namespace std;
struct P{string a;int t,xh;}z,lins;
int op[]={1,4,-1,-4},sz[9];
map <string,int> dp;
bool qianj(P &zt,int f)
{

	return 1;
}
void bfs(){
	queue <P> que;
	que.push(z);
	while (!que.empty()){
		for (int i=0;i<4;i++){
			lins=que.front();
			int j,xh=lins.xh+op[i],sum=0;
			if (xh<0||xh>7||(lins.xh==3&&op[i]==1)||(lins.xh==4&&op[i]==-1)) continue ;
			swap(lins.a[lins.xh],lins.a[xh]);
//			cout<<lins.a<<endl;
			map <string,int>::iterator it=dp.find(lins.a);
			if (it != dp.end()) continue;//dp.count(lins.a)!=0
			lins.xh=xh;
			lins.t++;
			dp[lins.a]=lins.t;			
			que.push(lins);
		}
		que.pop();
	}
}
int main()
{
	int i,j;
	char c[9];
	z.a="01234567",z.xh=0,z.t=0;
	bfs();
//	printf("%d\n",dp.size());
	while (~scanf("%d",&sz[0]))
	{
		for (i=1;i<8;i++)
			scanf("%d",&sz[i]);
		for (i=0;i<8;i++)
			c[i]=sz[i]+'0';
		c[8]='\0';
		string S=c;
		printf("%d\n",dp[S]);
	}
	return 0;
}