#include <cstdio>

int w, h, xs, ys, xg, yg;
int field[100][100];

bool recur(int c, int x, int y){
	if(field[x][y] != c){ return false; }
	if(x == xg && y == yg){ return true; }
	field[x][y] = -1;
	if(x > 0 && recur(c, x - 1, y)){ return true; }
	if(x < w - 1 && recur(c, x + 1, y)){ return true; }
	if(y > 0 && recur(c, x, y - 1)){ return true; }
	if(y < h - 1 && recur(c, x, y + 1)){ return true; }
	return false;
}

int main(){
	while(true){
		scanf("%d%d", &w, &h);
		if(w == 0 || h == 0){ break; }
		scanf("%d%d%d%d", &xs, &ys, &xg, &yg);
		xs--; ys--; xg--; yg--;
		int n;
		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			int c, d, x, y;
			scanf("%d%d%d%d", &c, &d, &x, &y);
			x--; y--;
			for(int j = 0; j < 2; j++){
				for(int k = 0; k < 4; k++){
					if(d == 0){
						field[x + k][y + j] = c;
					}else{
						field[x + j][y + k] = c;
					}
				}
			}
		}
		puts(recur(field[xs][ys], xs, ys) ? "OK" : "NG");
	}
	return 0;
}