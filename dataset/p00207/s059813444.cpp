#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int W,H, f[100][100];
bool memo[100][100];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

void dfs(int x, int y, int c)
{
	memo[x][y]=1;
	
	for(int i=0; i<4; i++)
	{
		int tx=x+dx[i], ty=y+dy[i];
		if(tx<0||ty<0||tx>=W||ty>=H) continue;
		if(f[tx][ty]!=c) continue;
		if(memo[tx][ty]) continue;
		dfs(tx,ty,c);
	}
}

int main()
{
	while(scanf("%d%d", &W,&H), (W||H))
	{
		int xs,ys,xg,yg,N;
		scanf("%d%d%d%d%d", &xs,&ys,&xg,&yg,&N);
		xs--;ys--;xg--;yg--;
		while(N--)
		{
			int c,d,x,y;
			scanf("%d%d%d%d", &c,&d,&x,&y);
			x--; y--;
			
			int w=2, h=4;
			if(d==0) swap(w,h);
			for(int i=y; i<y+h; i++)
			for(int j=x; j<x+w; j++)
				f[j][i]=c;
		}
		
		memset(memo,0,sizeof(memo));
		dfs(xs,ys,f[xs][ys]);
		
		puts(memo[xg][yg]?"OK":"NG");
	}
}