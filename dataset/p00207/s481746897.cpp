#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int w,h,f[100][100];
bool flag,used[100][100];
int xs,ys,xg,yg;
int color;

void dfs(int y,int x)
{
	if(y == yg && x == xg)
	{
		flag = true;
		return;
	}

	rep(i,4)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(0 <= nx && nx < w && 0 <= ny && ny < h && !used[ny][nx])
		{
			if(f[ny][nx] == color)
			{
				used[ny][nx] = true;
				dfs(ny,nx);
			}
		}
	}
	return;
}

int main()
{
	int n;

	while(cin >> w >> h)
	{
		if(w == 0 && h == 0) break;

		cin >> xs >> ys >> xg >> yg;
		cin >> n;

		xs--;
		ys--;
		xg--;
		yg--;

		memset(f,0,sizeof(f));
		rep(i,100) rep(j,100) used[i][j] = false;
		flag = false;
		rep(i,n)
		{
			int c,d,x,y;
			cin >> c >> d >> x >> y;
		
			x--;
			y--;

			if(d == 0)
			{
				rep(j,4) f[y][x+j] = c;
				rep(j,4) f[y+1][x+j] = c;
			}
			else if(d == 1)
			{
				rep(j,4) f[y+j][x] = c;
				rep(j,4) f[y+j][x+1] = c;
			}
		}

		color = f[ys][xs];
		dfs(ys,xs);

		if(flag) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
		return 0;
}