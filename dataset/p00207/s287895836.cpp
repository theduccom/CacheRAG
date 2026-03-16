// 2015/03/25 Tazoe

#include <iostream>
using namespace std;

void DFS(int F[102][102], int y, int x, int C)
{
	if(F[y][x]!=C)
		return;

	F[y][x] = 6;

	DFS(F, y-1, x, C);
	DFS(F, y, x+1, C);
	DFS(F, y+1, x, C);
	DFS(F, y, x-1, C);
}

int main()
{
	while(true){
		int w, h;
		cin >> w >> h;

		if(w==0 && h==0)
			break;

		int xs, ys;
		cin >> xs >> ys;

		int xg, yg;
		cin >> xg >> yg;

		int n;
		cin >> n;

		int F[102][102] = {};

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

//		for(int y=0; y<=h; y++){
//			for(int x=0; x<=w; x++){
//				cout << F[y][x];
//			}
//			cout << endl;
//		}

		if(F[ys][xs]==0){
			cout << "NG" << endl;
			continue;
		}

		DFS(F, ys, xs, F[ys][xs]);

		if(F[yg][xg]==6){
			cout << "OK" << endl;
		}
		else{
			cout << "NG" << endl;
		}
	}

	return 0;
}