#include <iostream>
using namespace std;

char f[16][16];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void dfs(int y, int x)
{
	f[y][x] = '0';

	for(int d=0; d<4; d++)
	{
		int nx = x+dx[d];
		int ny = y+dy[d];
		if(0<=nx&&nx<12&&0<=ny&&ny<12)
		if(f[ny][nx] == '1')
		{
			dfs(ny,nx);
		}
	}
}

int main()
{
	int c;
	while(cin >> f[0])
	{
		for(int y=1; y<12; y++)
		{
			cin >> f[y];
		}

		c=0;
		for(int y=0; y<12; y++)
		for(int x=0; x<12; x++)
		{
			if(f[y][x]=='1')
			{
				c++;
				dfs(y,x);
			}
		}
		cout << c << endl;
	}
}