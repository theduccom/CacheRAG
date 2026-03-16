#include <iostream>
using namespace std;

int main()
{
	int w, h;

	while( cin >> h >> w && !( h == 0 && w == 0 ) ){
		char* field = new char[ h * w ]();
		int x, y; x = y = 0;
		bool advance = true;
		for( int i = 0; i < h; ++i ){
			for( int j = 0; j < w; ++j ){
				cin >> field[ i * w + j ];
			}
		}
		while( advance ){
			char tile = field[ y * w + x ];
			field[ y * w + x ] = '*';
			switch( tile ){
				case '^': --y; break;
				case '>': ++x; break;
				case 'v': ++y; break;
				case '<': --x; break;
				case '*': advance = false; cout << "LOOP" << endl; break;
				case '.': advance = false; cout << x << " " << y << endl; break;
			}
		}
		delete[] field;
	}

	return 0;
}