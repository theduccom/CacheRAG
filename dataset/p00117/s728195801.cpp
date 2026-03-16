// AOJ 0117 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0117)
#include<cstdio>
#include<algorithm>
#include<limits>
#define rep(i,a) for(int i=0;i<(a);++i)

const int MAX_N = 20, INF = std::numeric_limits<int>::max()>>4;

int n, m;
int d[MAX_N][MAX_N];
int x1, x2, Y1, y2;

int main()
{
	scanf( "%d%d", &n, &m );

	rep( i, n ) rep( j, n )
		d[i][j] = i==j?0:INF;

	rep( i, m )
	{
		int a, b, c, di;
		scanf( "%d,%d,%d,%d", &a, &b, &c, &di );
		--a; --b;
		d[a][b] = c;
		d[b][a] = di;
	}

	rep( k, n ) rep( i, n ) rep( j, n )
		d[i][j] = std::min( d[i][j], d[i][k]+d[k][j] );

	scanf( "%d,%d,%d,%d", &x1, &x2, &Y1, &y2 );
	--x1; --x2;

	printf( "%d\n", Y1-d[x1][x2]-d[x2][x1]-y2 );

	return 0;
}