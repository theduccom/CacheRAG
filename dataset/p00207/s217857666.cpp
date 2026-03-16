#include <iostream>
#include <queue>
using namespace std;

int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

int main()
{
	int w, h;
	while( cin >> w >> h && ( w || h ) ){
		int* map = new int[ ( w + 2 ) * ( h + 2 ) ]();
		int xs, ys, xg, yg;
		cin >> xs >> ys;
		cin >> xg >> yg;
		int n;
		cin >> n;
		for( int i = 0; i < n; ++i ){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			for( int j = 0; j < 2; ++j ){
				if( d == 0 ) x += ( 2 * j );
				else y += ( 2 * j );
				for( int k = y; k < y + 2; ++k ){
					for( int m = x; m < x + 2; ++m ){
						map[ k * ( w + 2 ) + m ] = c;
					}
				}
			}
		}
		bool ans = false;
		int cs, cg;
		cs = map[ ys * ( w + 2 ) + xs ];
		cg = map[ yg * ( w + 2 ) + xg ];
		if( !( cs == 0 || cg == 0 || cs != cg ) ){
			queue< pair< int, int > > q;
			q.push( make_pair( xs, ys ) );
			while( !q.empty() ){
				int x = q.front().first;
				int y = q.front().second;
				q.pop();
				if( x == xg && y == yg ){
					ans = true;
					break;
				}
				map[ y * ( w + 2 ) + x ] = 0;
				for( int i = 0; i < 4; ++i ){
					int nx = x + dx[ i ];
					int ny = y + dy[ i ];
					if( map[ ny * ( w + 2 ) + nx ] == cs ){
						q.push( make_pair( nx, ny ) );
					}
				}
			}
		}
		cout << ( ans ? "OK" : "NG" ) << endl;
		delete[] map;
	}
	return 0;
}