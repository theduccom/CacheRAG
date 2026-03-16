#include<iostream>
#include<vector>

int w, h;
int xs, ys, xg, yg;
int cs;

bool isOK = false;

void calc(int (&field)[101][101], int x, int y){

	field[x][y] = -1;

	if (x == xg&&y == yg)isOK = true;

	if (x < w - 1 && field[x + 1][y] == cs)calc(field, x + 1, y);
	if (x > 0 && field[x - 1][y] == cs)calc(field, x - 1, y);
	if (y < h - 1 && field[x][y + 1] == cs)calc(field, x, y + 1);
	if (y > 0 && field[x][y - 1] == cs)calc(field, x, y - 1);

}

int main(){

	while (std::cin >> w >> h){

		if (w == 0 && h == 0)break;

		std::cin >> xs >> ys >> xg >> yg;

		xs--, ys--, xg--, yg--;

		int n;
		std::cin >> n;

		int field[101][101];
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 100; j++){
				field[i][j] = 0;
			}
		}

		for (int i = 0; i < n; i++){
			int c, d, x, y;
			std::cin >> c >> d >> x >> y;

			x--, y--;

			if (d == 0){
				for (int j = y; j < y + 2; j++){
					for (int k = x; k < x + 4; k++){
						field[k][j] = c;
					}
				}
			}
			if (d == 1){
				for (int j = y; j < y + 4; j++){
					for (int k = x; k < x + 2; k++){
						field[k][j] = c;
					}
				}
			}
		}

		cs = field[xs][ys];

		calc(field, xs, ys);

		if (cs != 0 && isOK)std::cout << "OK" << std::endl;
		else std::cout << "NG" << std::endl;

		isOK = false;
	}
	return 0;
}