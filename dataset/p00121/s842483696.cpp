#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define RG register int
#define rep(i,a,b)	for(RG i=a;i<=b;++i)
#define per(i,a,b)	for(RG i=a;i>=b;--i)
#define ll long long
#define inf (1<<29)
using namespace std;
int T,flg,n;
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
map<int,int> cnt;
struct Dat{
	int num[3][5];
	int x,y,step;
	int * operator [] (int x)	{return num[x];} 
}S;
inline int read()
{
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}

int getid(Dat p)
{
	int sum=0;
	rep(i,1,4)	sum+=pow(8,i-1)*p[1][i];
	rep(i,1,4)	sum+=pow(8,i+3)*p[2][i];
	return sum;
}

void bfs()
{
	queue<Dat> que;
	Dat u,v;int id,tx,ty;
	que.push(S);
	while(!que.empty())
	{
		u=que.front(),que.pop();
		rep(i,0,3)
		{
			tx=u.x+dir[i][0],ty=u.y+dir[i][1];
			if(tx<1||tx>2||ty<1||ty>4)	continue;
			v=u,swap(v[u.x][u.y],v[tx][ty]);
			v.x=tx,v.y=ty,v.step=u.step+1;
			id=getid(v);
			if(cnt.find(id)!=cnt.end())	continue;
			cnt[id]=v.step;
			que.push(v);
		}
	}
}

void pre()
{
	S.x=S.y=1;
	rep(i,1,4)	S[1][i]=i-1;
	rep(i,1,4)	S[2][i]=i+3;
	cnt[16434824]=0;
	bfs();
}

int main()
{
	pre();
	int sum;
	while(~scanf("%d",&S[1][1]))
	{
		rep(i,2,4)	S[1][i]=read();
		rep(i,1,4)	S[2][i]=read();
		sum=getid(S);
		printf("%d\n",cnt[sum]);
	}
	return 0;
}
