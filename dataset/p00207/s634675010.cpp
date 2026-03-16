#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
#include <algorithm>
#include <math.h>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;



int w, h, xs, ys, xg, yg, n, c, d, x, y, newc;
int board[100][100];	//添字は行、列の順
int dirx[] = {-1, 0, 0, 1};
int diry[] = {0, -1, 1, 0};
//xs,ysから接する同じ色のところを100に置き換えていく
void dfs(int x, int y)
{
	board[y][x] = 6;
	
	for (int i=0; i<4; i++)
	{
		int nx, ny;
		
		nx = x + dirx[i];
		ny = y + diry[i];
		
		if (0<=nx && nx<w && 0<=ny && ny<h && board[ny][nx]==newc)
		{
			dfs(nx, ny);
		}
	}
}


int main()
{
	while (cin >> w >> h)
	{
		if (w == 0 && h == 0) break;
		
		cin >> xs >> ys >> xg >> yg >> n;
		
		//board初期化
		for (int i=0; i<h; i++)
		{
			for (int j=0; j<w; j++)
			{
				board[i][j] = 0;
			}
		}
		
		for (int i=0; i<n; i++)
		{
			cin >> c >> d >> x >> y;
			if (d == 0)
			{
				//横向き
				board[y-1][x-1] = board[y-1][x] = board[y-1][x+1] = board[y-1][x+2] = c;
				board[y][x-1] = board[y][x] = board[y][x+1] = board[y][x+2] = c;
			} else {
				//縦向き
				board[y-1][x-1] = board[y][x-1] = board[y+1][x-1] = board[y+2][x-1] = c;
				board[y-1][x] = board[y][x] = board[y+1][x] = board[y+2][x] = c;
			}
		}
		
		newc = board[ys-1][xs-1];
		dfs(xs-1, ys-1);
		if (board[yg-1][xg-1] == 6)
		{
			cout << "OK" << endl;
		} else {
			cout << "NG" << endl;
		}
		
		
		//テスト出力
		/*
		for (int i=0; i<h; i++)
		{
			for (int j=0; j<w; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}
		*/
	}
	
	return 0;
}