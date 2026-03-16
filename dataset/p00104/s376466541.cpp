#include <bits/stdc++.h>

#define loop(v, f, l) for(int v = (f), v##_ = (l); v < v##_; ++v)

using namespace std;

typedef long long int lint;
static inline int in(){ int x; scanf("%d", &x); return (x); }
static inline lint inl(){ lint x; scanf("%lld", &x); return (x); }

char field[101][101];
bool isLeave[101][101];

char getNextPosTileAndNextPos(int x, int y, int* nextX, int* nextY)
{
	char result = '.';

	switch( field[y][x] )
	{
		case '>':
			result = field[y][x + 1];
			*nextX = x + 1;
			*nextY = y;
			break;
		case '<':
			result = field[y][x - 1];
			*nextX = x - 1;
			*nextY = y;
			break;
		case '^':
			result = field[y - 1][x];
			*nextX = x;
			*nextY = y - 1;
			break;
		case 'v':
			result = field[y + 1][x];
			*nextX = x;
			*nextY = y + 1;
			break;
		case '.':
			break;
	}
	return result;
}

int main()
{
	int w;
	int h;
	int x;
	int y;

	while( true )
	{
		scanf("%d%d", &h, &w);
		if( w == 0 && h == 0 )break;
		x = 0;
		y = 0;
		loop(i, 0, h)
		{
			scanf("%s", field[i]);
		}
		loop(i, 0, h)
		{
			loop(j, 0, w)
			{
				isLeave[i][j] = false;
			}
		}
		
		do
		{
			if( isLeave[y][x] )
			{
				printf("LOOP\n");
				break;
			}
			isLeave[y][x] = true;
		}
		while( getNextPosTileAndNextPos( x, y, &x, &y ) != '.' );
		if( field[y][x] == '.' )
		{
			printf("%d %d\n", x, y);
		}
	}
	return (0);
}