// 2011/01/14 Tazoe

#include<iostream>
using namespace std;

bool DFS(int brd[102][102], int x, int y, int col, int xg, int yg)
{
	if(brd[y][x]!=col)
		return false;
	if(x==xg&&y==yg)
		return true;

	brd[y][x] = 9;

	return(DFS(brd, x+1, y, col, xg, yg)
	     ||DFS(brd, x, y+1, col, xg, yg)
	     ||DFS(brd, x-1, y, col, xg, yg)
	     ||DFS(brd, x, y-1, col, xg, yg));
}

int main()
{
	while(true){
		int w, h;
		cin >> w >> h;
		if(w==0&&h==0)
			break;

		int brd[102][102];
		for(int yy=0; yy<h+2; yy++)
			for(int xx=0; xx<w+2; xx++)
				brd[yy][xx] = 0;

		int xs, ys, xg, yg, n;
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;

		for(int i=0; i<n; i++){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			brd[y  ][x  ] = c;
			brd[y  ][x+1] = c;
			brd[y+1][x  ] = c;
			brd[y+1][x+1] = c;
			if(d==0){
				brd[y  ][x+2] = c;
				brd[y  ][x+3] = c;
				brd[y+1][x+2] = c;
				brd[y+1][x+3] = c;
			}
			else{
				brd[y+2][x  ] = c;
				brd[y+2][x+1] = c;
				brd[y+3][x  ] = c;
				brd[y+3][x+1] = c;
			}
		}

		if(brd[ys][xs]==0||brd[yg][xg]==0||brd[ys][xs]!=brd[yg][xg]){
			cout << "NG" << endl;
			continue;
		}

		if(DFS(brd, xs, ys, brd[ys][xs], xg, yg))
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	}

	return 0;
}