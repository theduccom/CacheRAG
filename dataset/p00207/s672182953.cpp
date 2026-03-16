#include <iostream>
using namespace std;

int w, h, xs, ys, xg, yg, n, sc;
int map[101][101];
int dx[] = {1, 0, -1, 0},	dy[] = {0, 1, 0, -1};
int hx[] = {0, 1, 2, 3, 0, 1, 2 ,3}, hy[] = {0, 0, 0, 0, 1, 1, 1, 1};
int vx[] = {0, 0, 0, 0, 1, 1, 1, 1}, vy[] = {0, 1, 2, 3, 0, 1, 2, 3};
bool flag = false;

void dfs(int x, int y){
	if(x == xg && y == yg){
		flag = true;
		return;
	}
	map[y][x] = 9;
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i], ny = y + dy[i];
		if(1 <= nx && nx <= w && 1 <= ny && ny <= h && map[ny][nx] == sc)	dfs(nx, ny);
	}
	return;
}

int main(void){
	while(true){
		int c, d, x, y;
		flag = false;
		cin >> w >> h;
		if(w == 0 && h == 0)	break;
		cin >> xs >> ys >> xg >> yg >> n;
		for(int i = 0; i < n; i++){
			cin >> c >> d >> x >> y;
			if(d == 0){
				for(int j = 0; j < 8; j++)	map[y+hy[j]][x+hx[j]] = c;
			}else{
				for(int j = 0; j < 8; j++)	map[y+vy[j]][x+vx[j]] = c;
			}
		}
		sc = map[ys][xs];
		dfs(xs, ys);
		if(flag)	cout << "OK" << endl;
		else cout << "NG" << endl;
	}
  return 0;
}