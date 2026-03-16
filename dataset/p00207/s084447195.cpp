#include <iostream>
using namespace std;

int w,h,sx,sy,gx,gy,n;
int f[128][128];

int dx[] = { 0, 1, 0,-1};
int dy[] = { 1, 0,-1, 0};

bool dfs(int x, int y)
{
	if(f[y][x]==0)
	{
		return false;
	}
	if(x==gx && y==gy)
	{
		return true;
	}

	int c = f[y][x];
	f[y][x] = 0;
	for(int i=0; i<4; i++)
	{
		int nx = x+dx[i];
		int ny = y+dy[i];

		if(f[ny][nx]==c)
		{
			if(dfs(nx,ny))
			{
				return true;
			}
		}
	}

	return false;
}

int main()
{
	while(cin >> w >> h, w||h)
	{
		for(int y=0; y<128; y++)
		for(int x=0; x<128; x++)
		{
			f[y][x] = 0;
		}

		cin >> sx >> sy >> gx >> gy >> n;
		for(int i=0; i<n; i++)
		{
			int c,d,xx,yy,px,py;
			cin >> c >> d >> xx >> yy;

			px = (1-d)*2;
			py = (  d)*2;

			for(int y=0; y<2; y++)
			for(int x=0; x<2; x++)
			{
				f[yy   +y][xx   +x] = c;
				f[yy+py+y][xx+px+x] = c;
			}
		}
		
		cout << (dfs(sx,sy)?"OK":"NG") << endl;
	}
	return 0;
}