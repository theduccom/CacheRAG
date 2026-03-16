#include <iostream>
using namespace std;


char tile[100][100];
int h, w;
int ax, ay;
bool loop = false;


void solve(int x, int y){
	if (tile[y][x] == '>'){
		tile[y][x] = '*';
		solve(x + 1, y);
	}
	else if (tile[y][x] == '<'){
		tile[y][x] = '*';
		solve(x - 1, y);
	}
	else if (tile[y][x] == '^'){
		tile[y][x] = '*';
		solve(x, y - 1);
	}
	else if (tile[y][x] == 'v'){
		tile[y][x] = '*';
		solve(x, y + 1);
	}
	else if (tile[y][x] == '.'){
		ax = x;
		ay = y;
	}
	else if (tile[y][x] == '*'){
		loop = true;
	}
}


int main(){


	while (cin >> h >> w, h || w != 0){
		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				cin >> tile[y][x];
			}
		}
		solve(0, 0);
		if (!loop) cout << ax << ' ' << ay << endl;
		else cout << "LOOP" << endl;
		loop = false;
	}

	return 0;
}