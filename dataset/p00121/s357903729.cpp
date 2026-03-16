#include <iostream>
#include <map>
#include <queue>
using namespace std;

unsigned int swapPos( unsigned int s, int a, int b )
{
	unsigned int x, y, ret;
	x = ( s >> ( ( 7 - a ) * 4 ) ) & ( ( 1 << 4 ) - 1 );
	y = ( s >> ( ( 7 - b ) * 4 ) ) & ( ( 1 << 4 ) - 1 );
	unsigned long long int mask;
	mask = ( ( ( 1 << 4 ) - 1 ) << ( ( 7 - a ) * 4 ) ) | ( ( ( 1 << 4 ) - 1 ) << ( ( 7 - b ) * 4 ) );
	ret = s & ~( mask );
	ret += ( x << ( ( 7 - b ) * 4 ) ) + ( y << ( ( 7 - a ) * 4 ) );
	return ret;
}

int main()
{
	map< unsigned int, int > ans;
	queue< unsigned int > q;


	unsigned int s = 0;
	for( unsigned int i = 0; i < 8; ++i ){
		s <<= 4;
		s += i;
	}
	ans.insert( make_pair( s, 0 ) );
	q.push( s );

	int cnt = 0;
	while( !q.empty() ){
		++cnt;
		int size = q.size();
		for( int i = 0; i < size; ++i ){
			unsigned int s = q.front();
			q.pop();
			unsigned int pos = 0;
			unsigned int t = s;
			for( unsigned int j = 0; j < 8; ++j ){
				if( ( ( t & ( ( 1 << 4 ) - 1 ) ) ) == 0 ){
					pos = 7 - j;
					break;
				}
				t >>= 4;
			}
			bool right, left;
			right = left = false;
			if( pos != 3 && pos != 7 ) right = true;
			if( pos != 0 && pos != 4 ) left = true;
			t = swapPos( s, pos, ( pos + 4 ) % 8 );
			if( ans.find( t ) == ans.end() ){
				ans.insert( make_pair( t, cnt ) );
				q.push( t );
			}
			if( right ){
				t = swapPos( s, pos, pos + 1 );
				if( ans.find( t ) == ans.end() ){
					ans.insert( make_pair( t, cnt ) );
					q.push( t );
				}
			}
			if( left ){
				t = swapPos( s, pos, pos - 1 );
				if( ans.find( t ) == ans.end() ){
					ans.insert( make_pair( t, cnt ) );
					q.push( t );
				}
			}
		}
	}

	int a[ 8 ];
	while( cin >> a[ 0 ] ){
		for( int i = 1; i < 8; ++i ){
			cin >> a[ i ];
		}

		s = 0;
		for( unsigned int i = 0; i < 8; ++i ){
			s <<= 4;
			s += a[ i ];
		}
		cout << ans[ s ] << endl;
	}

	return 0;
}