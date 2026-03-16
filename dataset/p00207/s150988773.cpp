#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define EQ(a,b) (abs((a)-(b))<eps)
int w,h;
int sx,sy,gx,gy;
int n;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
bool used[120][120];
int f[120][120];
void set(int c,int d,int x,int y)
{
	if(d==0)
	{
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<4;j++)
			{
				f[x+i][y+j]=c;
			}
		}
	}
	else
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<2;j++)
			{
				f[x+i][y+j]=c;
			}
		}
	}
	return;
}
bool judge()
{
	if(f[sx][sy]!=f[gx][gy])return false;
	memset(used,false,sizeof(used));
	queue<P> q;
	q.push(mp(sx,sy));
	used[sx][sy]=true;
	while(!q.empty())
	{
		P a=q.front();
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=a.fi+dx[i],ny=a.sec+dy[i];
			if(nx<=0||nx>w||ny<=0||ny>h)continue;
			if(used[nx][ny]||f[nx][ny]!=f[a.fi][a.sec])continue;
			if(nx==gx&&ny==gy)return true;
			used[nx][ny]=true;
			q.push(mp(nx,ny));
		}
	}
	return false;
}
int main()
{
	while(1)
	{
		memset(f,0,sizeof(f));
		scanf("%d %d",&h,&w);
		if(w==0&&h==0)break;
		scanf("%d %d",&sy,&sx);
		scanf("%d %d",&gy,&gx);
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			int c,d,x,y;
			scanf("%d %d %d %d",&c,&d,&y,&x);
			set(c,d,x,y);
		}
		if(judge())puts("OK");
		else puts("NG");
	}
	return 0;
}