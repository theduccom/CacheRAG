#include <iostream>
using namespace std;

#define max 100
char map[100][100];
bool visited[100][100];

int main(void){

	while( 1 ) {
		int pos[] = {0, 0};
		int w, h;
		cin >> h >> w;
		if( !(w|h) ) break;

		for(int i = 0; i < max * max; i++)
			visited[ i / max ][ i % max ] = false;
		for(int i = 0; i < h; i++)
			cin >> map[i];

		while( !(visited[ pos[0] ][ pos[1] ] == true || map[ pos[0] ][ pos[1] ] == '.') ) {
			visited[ pos[0] ][ pos[1] ] = true;
			switch( map[ pos[0] ][ pos[1] ] ) {
				case '>':
					pos[1] ++;
					break;
				case '<':
					pos[1] --;
					break;
				case '^':
					pos[0] --;
					break;
				case 'v':
					pos[0] ++;
					break;
			}
		}

		if( visited[ pos[0] ][ pos[1] ] == true )
			cout << "LOOP" << endl;
		else
			cout << pos[1] << " " << pos[0] << endl;

	}

	return 0;
}