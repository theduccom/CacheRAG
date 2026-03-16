#include <iostream>

void bomb( char map[8][8], int x, int y) {
	if (0<=x && 0<=y && x<8 && y<8) if( map[x][y]=='1' ) {
		map[x][y] = '0';
		for( int i=-3; i<=3; i++) {
			if(0<=x+i && x+i<8) if(map[x+i][y]=='1') bomb( map, x+i, y);
			if(0<=y+i && y+i<8) if(map[x][y+i]=='1') bomb( map, x, y+i);
		}
	}
}

int main() {
	int n;
	std::cin >> n;
	
	for( int i=0; i<n; i++) {
		char mapstr[8][8];
		int x, y;
		
		// Load the map
		for( int i=0; i<64; i++) std::cin >> mapstr[i%8][i/8];
		
		// Load the Target
		std::cin >> x >> y;
		
		// Bomb!!
		bomb( mapstr, x-1, y-1);
		
		std::cout << "Data " << (i+1) << ":" << std::endl;
		for( int i=0; i<64; i++) std::cout << mapstr[i%8][i/8] << ( (i%8==7) ? "\n" : "");
	}
	return 0;
}