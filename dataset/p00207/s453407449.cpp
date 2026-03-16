#include<iostream>
using namespace std;

int F[102][102];

bool DFS(int X, int Y, int Xg, int Yg, int c){
	if(F[Y][X] != c){
		return false;
	}else if(F[Y][X] == c && X == Xg && Y == Yg){
		return true;
	}
	F[Y][X] = -1;
	if(DFS(X, Y - 1, Xg, Yg, c)){
		return true;
	}else if(DFS(X + 1, Y, Xg, Yg, c)){
		return true;
	}else if(DFS(X, Y + 1, Xg, Yg, c)){
		return true;
	}else if(DFS(X - 1, Y, Xg, Yg, c)){
		return true;
	}
	
	return false;
}

int main(){
while(true){
	int w, h;
	cin >> w >> h;
	if(w == 0 && h == 0){
		break;
	}
	int xs, ys, xg, yg;
	cin >> xs >> ys >> xg >> yg;
	int n;
	cin >> n;
	for(int y = 0; y < 102; y++){
		for(int x = 0; x < 102; x++){
			F[y][x] = -1;
		}
	}
	for(int i = 0; i < n; i++){
		int c, d, x, y;
		cin >> c >> d >> x >> y;
		if(d == 0){
			for(int X = x; X < x + 4; X++){
				for(int Y = y; Y < y + 2; Y++){
					F[Y][X] = c;
				}
			}
		}else if(d == 1){
			for(int X = x; X < x + 2; X++){
				for(int Y = y; Y < y + 4; Y++){
					F[Y][X] = c;
				}
			}
		}
	}
	if(F[ys][xs] != -1){
		if(DFS(xs, ys, xg, yg, F[ys][xs])){
			cout << "OK" << endl;
		}else{
			cout << "NG" << endl;
		}
	}else{
			cout << "NG" << endl;
	}
}
	return 0;
}