// 2015/07/03 Tazoe

#include <iostream>
using namespace std;

int F[102][102];

void DFS(int Y, int X, int C)
{
	if(F[Y][X]!=C)
		return;

	F[Y][X] = 6;

	DFS(Y-1, X, C);		// 上
	DFS(Y, X+1, C);		// 右
	DFS(Y+1, X, C);		// 下
	DFS(Y, X-1, C);		// 左
}

int main()
{
	while(true){
		int w, h;
		cin >> w >> h;

		if(w==0 && h==0)
			break;

		for(int y=0; y<=h+1; y++){
			for(int x=0; x<=w+1; x++){
				F[y][x] = 0;		// 初期化
			}
		}

		int xs, ys;
		cin >> xs >> ys;

		int xg, yg;
		cin >> xg >> yg;

		int n;
		cin >> n;

		for(int i=0; i<n; i++){
			int c, d, x, y;
			cin >> c >> d >> x >> y;

			F[y][x] = F[y][x+1] = F[y+1][x] = F[y+1][x+1] = c;

			if(d==0){
				F[y][x+2] = F[y][x+3] = F[y+1][x+2] = F[y+1][x+3] = c;
			}
			else{
				F[y+2][x] = F[y+2][x+1] = F[y+3][x] = F[y+3][x+1] = c;
			}
		}

		if(F[ys][xs]==0){
			cout << "NG" << endl;
			continue;
		}

		DFS(ys, xs, F[ys][xs]);

		if(F[yg][xg]==6){
			cout << "OK" << endl;
		}
		else{
			cout << "NG" << endl;
		}
	}

	return 0;
}