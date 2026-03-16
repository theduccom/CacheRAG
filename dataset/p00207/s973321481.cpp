#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <queue>

using namespace std;

int w, h;

int map[200][200];

void search(int x, int y, int col){
	if(x < 0 || y < 0 || x > w || y > h){
		return;
	}
	if(map[x][y] != col || map[x][y] == 0){
		return;
	}
	map[x][y] = 0;
	search(x - 1, y, col);
	search(x + 1, y, col);
	search(x, y - 1, col);
	search(x, y + 1, col);
}

int main(){
	
	
	while(true){
		
		cin >> w >> h;
		if(w == 0 && h == 0){
			break;
		}
		
		int xs, ys, xg, yg;
		
		cin >> xs >> ys >> xg >> yg;
		
		int n;
		
		cin >> n;
		
		for(int i = 0; i <= w; i++){
			for(int j = 0; j <= h; j++){
				map[i][j] = 0;
			}
		}
		
		for(int loop = 0; loop < n; loop++){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			if(d == 0){
				for(int dx = 0; dx < 4; dx++){
					for(int dy = 0; dy < 2; dy++){
						map[x + dx][y + dy] = c;
					}
				}
			}else{
				for(int dx = 0; dx < 2; dx++){
					for(int dy = 0; dy < 4; dy++){
						map[x + dx][y + dy] = c;
					}
				}
			}
		}
		
		if(map[xs][ys] == 0 || map[xg][yg] == 0){
			cout << "NG" << endl;
		}else{
			search(xs, ys, map[xs][ys]);
			if(map[xg][yg] == 0){
				cout << "OK" << endl;
			}else{
				cout << "NG" << endl;
			}
		}
		/*
		for(int y = 1; y <= h; y++){
			for(int x = 1; x <= w; x++){
				cout << map[x][y];
			}
			cout << endl;
		}
		*/
	}
	
	return 0;
}