#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>

using namespace std ;

int w ,h ,n ;
int sx ,sy ,gx ,gy ;

struct P
{
	int x ;
	int y ;
} ;

bool came[ 110 ][ 110 ] ;

int map[ 110 ][ 110 ] ;

void high( int x ,int y ,int c )
{
	for( int i = 0 ; i < 4 ; i++ )
	{
		for( int j = 0 ; j < 2 ; j++ )
			map[ y + i ][ x + j ] = c ;
	}

	return ;
}

void wide( int x ,int y ,int c )
{
	for( int i = 0 ; i < 2 ; i++ )
	{
		for( int j = 0 ; j < 4 ; j++ )
			map[ y + i ][ x + j ] = c ;
	}

	return ;
}

int main()
{
	while( cin >> w >> h )
	{
		if( w == h && !w )
			return 0 ;
		cin >> sx >> sy >> gx >> gy >> n ;
	memset( came ,false ,sizeof came ) ;
	memset( map ,0 ,sizeof map ) ;

	stack< P > st ;

	int c ,d ,x ,y ;
	int d1 ,d2 ;
	for( int k = 0 ; k < n ; k++ )
	{
		cin >> c >> d >> x >> y ;
		d ? high( x ,y ,c ) : wide( x ,y ,c ) ;
		/*if( d )
		{
			d1 = 2 ;
			d2 = 4 ;
		}
		else
		{
			d1 = 4 ;
			d2 = 2 ;
		}
		for( int i = 0 ; i < d1 ; i++ )
		{
			for( int j = 0 ; j < d2 ; j++ )
				map[ y + i ][ x + j ] = c ;
		}*/
	}
/*
for( int i = 0 ; i <= h + 1 ; i++ )
{
	for( int j = 0 ; j <= w + 1 ; j++ )
		cout << map[ i ][ j ] ;
	cout << endl ;
}
*/
	if( map[ sy ][ sx ] != map[ gy ][ gx ] )
	{
		printf( "NG\n" ) ;
		continue ;
	}

	c = map[ gy ][ gx ] ;

	for( int i = 1 ; i <= h ; i++ )
	{
		for( int j = 1 ; j <= w ; j++ )
		{
			if( c == map[ i ][ j ] )
				came[ i ][ j ] = true ;
		}
	}

	d = 1 ;
	P l ;
	l.x = sx ;
	l.y = sy ;
	st.push( l ) ;

	came[ sy ][ sx ] = false ;

	while( !st.empty() )
	{

		P p = st.top() ;
		st.pop() ;

		if( p.x == gx && p.y == gy )
		{
			d = 0 ;
			break ;
		}
		for( int i = 0 ; i < 4 ; i++ )
		{
			int mx[] = { 1 ,0 ,0 ,-1 } ;
			int my[] = { 0 ,1 ,-1 ,0 } ;
			int xx = p.x + mx[ i ] ;
			int yy = p.y + my[ i ] ;
			if( xx > 0 && x <= w && yy > 0 && yy <= h && came[ yy ][ xx ] )
			{
				came[ yy ][ xx ] = false ;
				l.x = xx ;
				l.y = yy ;
				st.push( l ) ;
			}
		}
	}
	d ? printf( "NG\n" ) : printf( "OK\n" ) ;

	}
}