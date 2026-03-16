#include<iostream>
#include<string>
using namespace std;

char map[9][9];

void bomb( int x, int y ){
	map[x][y] = '0';
	for( int dy=1; dy<=3; dy++ ){
		if( y-dy >= 1 ){
			if( map[x][y-dy] == '1' ){
				bomb( x, y-dy );
			}
		}
		if( y+dy <= 8 ){
			if( map[x][y+dy] == '1' ){
				bomb( x, y+dy );
			}
		}
	}
	for( int dx=1; dx<=3; dx++ ){
		if( x-dx >= 1 ){
			if( map[x-dx][y] == '1' ){
				bomb( x-dx, y );
			}
		}
		if( x+dx <= 8 ){
			if( map[x+dx][y] == '1' ){
				bomb( x+dx, y );
			}
		}
	}
	return;
}

int main(){
	int n;
	string line;
	getline( cin, line );
	sscanf( line.c_str(), "%d", &n );
	
	for( int i=1; i<=n; i++ ){
		getline( cin, line );
		for( int y=1; y<=8; y++ ){
			getline( cin, line );
			for( int x=1; x<=8; x++ )
				map[x][y] = line[x-1];
		}
		int bx, by;
		getline( cin, line );
		sscanf( line.c_str(), "%d", &bx );
		getline( cin, line );
		sscanf( line.c_str(), "%d", &by );
		bomb( bx, by );
		cout << "Data " << i << ":" << endl;
		for( int y=1; y<=8; y++ ){
			for( int x=1; x<=8; x++ ){
				cout << map[x][y];
			}
			cout << endl;
		}
	}
	return 0;
}