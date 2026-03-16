#include<string>
#include<queue>
#include<stack>
#include<iostream>
#include<algorithm>
using namespace std;

int block[100][100];
bool maze = false;
int w, h;

void Lnitialization(int w,int h){
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			block[i][j] = 0;
		}
	}
}
void Side(int c,int x,int y){
	for (int i = y; i < y + 2; i++){
		for (int j = x; j < x + 4; j++){
			block[i][j] = c;
		}
	}
}
void Longitudinal(int c,int x,int y){
	for (int i = y; i < y + 4; i++){
		for (int j = x; j < x + 2; j++){
			block[i][j] = c;
		}
	}
}
void solve(int xs, int ys, int xg, int yg,int c){

	if (xs<0 || xs>w || ys<0 || ys>h || block[ys][xs] != c) return;
	if (ys == yg && xs == xg) {
		maze = true;
		return;
	}
	block[ys][xs] = -1;

	solve(xs+1, ys, xg, yg, c);
	solve(xs-1, ys, xg, yg, c);
	solve(xs, ys+1, xg, yg, c);
	solve(xs, ys-1, xg, yg, c);

	return;
}

// block[xx][xx]???-1?????£?????´??? return;
// block[xx][xx]??????????????§????????´??? return;
// block[xx][xx]?????´???????????£?????´??????true AND re:start

int main(){
	int xs, ys;
	int xg, yg;
	int n;
	int c, d, x, y;
	while (cin >> w >> h, w, h){
		Lnitialization(w, h);
		cin >> xs >> ys;
		cin >> xg >> yg;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> c >> d >> x >> y;
			if (d == 0) Side(c, x, y);
			else if (d == 1) Longitudinal(c, x, y);
		}
		c = block[ys][xs];
		solve(xs, ys, xg, yg, c);
		if (maze) cout << "OK" << endl;
		else cout << "NG" << endl;
		maze = false;
 	}
	return 0;
}