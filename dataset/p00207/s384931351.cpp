#include<iostream>
using namespace std;
#define MAX 105

int map[MAX][MAX];
int xs, ys, xg, yg;
int n;
int w, h;
int c, d, x, y;
int count = 0;
int color;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void jadge(int x, int y){
	if(count == 0){
		if(0 <= x && x <= w && 0 <= y && y <= h && map[x][y] == color){
			map[x][y] = 9;
			if(x == xg && y == yg){
				count = 1;
				return;
			}
			for(int i=0; i < 4; i++){
				jadge(x+dx[i], y+dy[i]);
			}
		}
	}
}
int main(){
	while(1){
		count = 0;

		for(int i=0; i < MAX; i++){
			for(int j=0; j< MAX; j++){
				map[i][j] = 0;
			}
		}

		cin >> h >> w;
		if(w == 0 && h == 0) break;

		cin >> ys >> xs;
		cin >> yg >> xg;
		xs--; ys--; xg--; yg--;
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> c >> d >> y >> x;

			for(int i=0;  i < 4; i++){
				for(int j=0; j < 2; j++){
					if(d == 1){
						map[x-1+i][y-1+j] = c;
					}
					else{
						map[x-1+j][y-1+i] = c;
					}
				}
			}
		}
		/*
		for(int i=0; i < w; i++){
			for(int j=0; j < h; j++){
				cout << map[i][j];
			}
			cout << endl;
		}
		*/
		if(map[xs][ys] != map[xg][yg]){
			cout << "NG" << endl;
			continue;
		}
		else if(map[xs][ys] == 0 || map[xg][yg] == 0){
			cout << "NG" << endl;
			continue;
		}
		color = map[xs][ys];

		jadge(xs, ys);

		if(count == 1) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
	return 0;
}