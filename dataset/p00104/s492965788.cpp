#include <iostream>
#include <set>
#include <string>

using namespace std;

struct Point{
	short x;
	short y;
};

int change( const Point& point)
{
	return point.x + point.y * 200;
}
int main(int argc, char const* argv[])
{
	int H,W;
	Point place;
	set<int> data;
	string stage[101];

START:
	while( cin >> W >> H && W != 0 ){
		for( int i = 0;i < W;i++ ) cin >> stage[i];

		data.clear();
		place.x = 0;
		place.y = 0;
		while( 1 ){
			switch( stage[place.x][place.y] ){
				case '>':
					place.y++;
					if( data.count( change( place ) ) ){
						cout << "LOOP" << endl;
						goto START;
					}
					data.insert( change( place ) );
					break;
				case '<':
					place.y--;
					if( data.count( change( place ) ) ){
						cout << "LOOP" << endl;
						goto START;
					}
					data.insert( change( place ) );
					break;
				case '^':
					place.x--;
					if( data.count( change( place ) ) ){
						cout << "LOOP" << endl;
						goto START;
					}

					data.insert( change( place ) );
					break;
				case 'v':
					place.x++;
					if( data.count( change( place ) ) ){
						cout << "LOOP" << endl;
						goto START;
					}

					data.insert( change( place ) );
					break;
				case '.':
					cout << (int)place.y << ' ' << (int)place.x << endl;
					goto START;
					break;
			}
		}
	}
	return 0;
	
}