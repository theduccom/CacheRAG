#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	char map[100][100];
	int w, h, x = 0, y = 0, lx, ly, c;

	while (1){
		c = 0;

		cin >> h >> w;

		if (w == 0 && h == 0)break;

		//input
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				cin >> map[i][j];
			}
		}

		//detect
		while(1){
			c++;
			
			if (c > w*h){
				lx = -1;
				ly = -1;
				break;
			}

			switch (map[y][x]){
			case '>':x++; break;
			case '<':x--; break;
			case '^':y--; break;
			case 'v':y++; break;
			}

			if (map[y][x] == '.'){
				lx = x; ly = y;
				break;
			}
		}

		if (lx == -1 && ly == -1){
			cout << "LOOP" << endl;
		}
		else{
			cout << lx << ' ' << ly << endl;
		}

		x = y = 0;
	}

	return 0;
}