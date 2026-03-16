#include <iostream>
using namespace std;
int board[100][100],w,h,xg,yg;
bool f(int y,int x,int color){
	board[y][x] = -1;
	int dy[] = {-1,0,0,1},dx[] = {0,-1,1,0},i;
	if(y == yg - 1 && x == xg -1) return true;
	for(i = 0;i < 4;i++){
		if(y + dy[i] > -1 && y + dy[i] < h && x + dx[i] > -1 && x + dx[i] < w){
			if(board[y+dy[i]][x+dx[i]] == color){
				if(f(y+dy[i],x+dx[i],color)) return true;
			}
		}
	}
	return false;
}
int main(){
	int xs,ys,n,i,j,k,c,d,x,y;
	while(cin >> w >> h && (w != 0 && h != 0)){
		for(j = 0;j < 100;j++){
			for(i = 0;i < 100;i++){
				board[j][i] = -1;
			}
		}
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;
		for(i = 0;i < n;i++){
			cin >> c >> d >> x >> y;
			x -= 1;
			y -= 1;
			if(d == 0){
				for(j = 0;j < 2;j++){
					for(k = 0;k < 4;k++){
						board[y+j][x+k] = c;
					}
				}
			}
			else if(d == 1){
				for(j = 0;j < 2;j++){
					for(k = 0;k < 4;k++){
						board[y+k][x+j] = c;
					}
				}
			}
		}
		if(board[ys - 1][xs - 1] != -1){
			if(f(ys - 1,xs -1,board[ys - 1][xs - 1])) cout << "OK" << endl;
			else cout << "NG" << endl;
		}
		else cout << "NG" << endl;
	}
	return 0;
}