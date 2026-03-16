#define _USE_MATH_DEFINES
#include<cstdio>
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<stack>
#include<cmath>
#include<climits>
#include<map>
#include<string>
using namespace std;

const int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};

struct Data{
	int y, x;
	Data(){}
	Data(int _y, int _x){
		y = _y; x = _x;
	}
};

int fld[100][100];

void PaintFld(int c, int y, int x, int h, int w){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			fld[y+i][x+j] = c;
		}
	}
}

int main(){
	int W, H;
	while(cin >> W >> H, W || H){
		fill_n( (int*)fld, 100*100, 0 );
		int Xs, Ys, Xg, Yg, N, C, D, X, Y;
		cin >> Xs >> Ys >> Xg >> Yg >> N;
		Xs--; Ys--; Xg--; Yg--;
		for(int i = 0; i < N; i++){
			cin >> C >> D >> X >> Y;
			X--; Y--;
			if(D == 0) PaintFld(C, Y, X, 2, 4);
			else PaintFld(C, Y, X, 4, 2);
		}

		queue<Data> q;
		Data q_front;
		bool memo[100][100] = {}, ans = false;
		q.push( Data(Ys, Xs) );
		while( !q.empty() ){
			q_front = q.front(); q.pop();

			if( fld[q_front.y][q_front.x] == 0 ||
				fld[q_front.y][q_front.x] != fld[Ys][Xs] )
				continue;

			if(q_front.y == Yg && q_front.x == Xg){
				ans = true; break;
			}

			if(memo[q_front.y][q_front.x]) continue;
			memo[q_front.y][q_front.x] = true;

			for(int i = 0; i < 4; i++){
				int ny = q_front.y + dy[i];
				int nx = q_front.x + dx[i];
				if(ny < 0 || H <= ny || nx < 0 || W <= nx) continue;
				q.push( Data(ny, nx) );
			}
		}
		
		if(ans) puts("OK");
		else puts("NG");
	}
	return 0;
}