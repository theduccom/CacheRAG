#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int dx[4] = { -1, 0, 1, 0};
int dy[4] = {  0,-1, 0, 1};
int field[8][8];

void dfs( int x, int y ){
	field[y][x] = 0;
	for( int i=0; i<4; i++ ){
		for( int j=1; j<=3; j++ ){
			int nx = x+dx[i]*j;
			int ny = y+dy[i]*j;
			if( nx < 0 || 8 <= nx || ny < 0 || 8 <= ny ) continue;
			if( field[ny][nx] == 1 ){
				dfs( nx, ny );
				break;
			}
		}
	}
	return;
}

int main(){
	int n;
	cin >> n;
	for( int a=0; a<n; a++ ){
		for( int i=0; i<8; i++ ){
			string line;
			cin >> line;
			for( int j=0; j<line.size(); j++ ){
				field[i][j] = (int)(line[j]-'0');
			}
		}
		int sx, sy;
		cin >> sx >> sy;
		cout << "Data " << a+1 << ":" << endl;
		dfs( sx-1, sy-1 );
		for( int i=0; i<8; i++ ){
			for( int j=0; j<8; j++ ){
				cout << field[i][j];
			}
			cout << endl;
		}
	}
}