#include <iostream>
using namespace std;

int F[102][102] = { 0 };

void DFS(int Y, int X, int c) {
	//cout << Y << " " << X << endl;
	if (F[Y][X] != c)
		return;
	F[Y][X] = 10;
	DFS(Y - 1, X, c);//???
					 //DFS(Y - 1, X+1, A_ito);//??????
	DFS(Y, X + 1, c);//???
					 //DFS(Y + 1, X+1, A_ito);//??????
	DFS(Y + 1, X, c);//???
					 //DFS(Y + 1, X-1, A_ito);//??????
	DFS(Y, X - 1, c);//???
					 //DFS(Y - 1, X-1, A_ito);//??????
}


int main()
{
	int xs, ys, xg, yg, n;
	int c, d, x, y;
	int W = 1, H = 1;

	while (true) {
		cin >> W >> H;
		if ((W == 0) && (H == 0)) {
			break;
		}
		cin >> xs >> ys >> xg >> yg >> n;
		for (int i = 1;i <= n;i++) {
			cin >> c >> d >> x >> y;
			if (d == 1) {
				F[y    ][x    ] = c;
				F[y    ][x + 1] = c;
				F[y + 1][x    ] = c;
				F[y + 1][x + 1] = c;
				F[y + 2][x    ] = c;
				F[y + 2][x + 1] = c;
				F[y + 3][x    ] = c;
				F[y + 3][x + 1] = c;
			}
			if (d == 0) {
				F[y    ][x    ] = c;
				F[y + 1][x    ] = c;
				F[y    ][x + 1] = c;
				F[y + 1][x + 1] = c;
				F[y    ][x + 2] = c;
				F[y + 1][x + 2] = c;
				F[y    ][x + 3] = c;
				F[y + 1][x + 3] = c;
			}
		}
		if (F[ys][xs] != 0)
			DFS(ys, xs, F[ys][xs]);

		if (F[yg][xg] == 10) {
			cout << "OK" << endl;
		}
		else { cout << "NG" << endl; }
		for (int i = 1;i <= H;i++) {
			for (int j = 1;j <= W;j++) {
				F[i][j] = 0;
			}
		}

	}

	return 0;
}