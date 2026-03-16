#include<iostream>
using namespace std;
#define MAX (256)

char field[MAX][MAX];

int main(){
	int w, h;
	while(cin >> w >> h, w || h){
		for(int i=0; i < w; i++){
			for(int j=0; j < h; j++){
				cin >> field[i][j];
			}
		}
		int x=0, y=0;
		while(1){
			switch(field[x][y]){
				case '>':
					field[x][y] = '#';
					y++;
					break;
				case 'v':
					field[x][y] = '#';
					x++;
					break;
				case '<':
					field[x][y] = '#';
					y--;
					break;
				case '^':
					field[x][y] = '#';
					x--;
					break;
				case '.':
					field[x][y] = '%';
					cout << y << ' ' << x << endl;
					break;
				case '#':
					field[x][y] = '%';
					cout << "LOOP" << endl;
					break;
			}
			if(field[x][y] == '%') break;
		}
	}
}