#include<stdio.h>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;
char m[128][128];
void PutSquare(int x, int y, int c)
{
	m[y][x] = m[y+1][x] = m[y+1][x+1] = m[y][x+1] = static_cast<char>(c);
}
bool CanReach(int sx,int sy,int gx,int gy)
{
	bool f[128][128]={};

	typedef pair<int,int>P;
	queue<P>q;
	q.push(P(sx,sy));

	const char c = m[sy][sx];
	if(!c)
		return false;
	const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
	while(!q.empty())
	{
		P p = q.front();
		q.pop();
		if(f[p.second][p.first] || c!=m[p.second][p.first])
			continue;
		if(p.first==gx && p.second==gy)
			return true;
		f[p.second][p.first] = true;
		for(int i=0; i<4; ++i)
			q.push(P(p.first+dx[i],p.second+dy[i]));
	}
	return false;
}
int main()
{
	int h, w;
	int sx, sy;
	int gx, gy;
	int n;
	int c, d, x, y;
	while(scanf("%d%d",&w,&h),h)
	{
		memset(m,0,sizeof(m));

		scanf("%d%d",&sx,&sy);
		scanf("%d%d",&gx,&gy);
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d%d%d%d",&c,&d,&x,&y);
			PutSquare(x,y,c);
			if(d==0)
				PutSquare(x+2,y,c);
			else
				PutSquare(x,y+2,c);
		}
		puts(CanReach(sx,sy,gx,gy) ? "OK" :"NG");
	}
	return 0;
}