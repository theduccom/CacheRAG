#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int main()
{
	int b[3];
	rep( i, 3 )
		scanf( "%d", b+i );

	puts( b[0]&b[1] || b[2] ? "Open" : "Close" );

	return 0;
}