#include <iostream>
using namespace std;

int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};

int w,h,xs,ys,xg,yg,n,cc;
int field[100][100];
bool flag;

void dfs(int x,int y,int c){
	if(flag) return;
	if(x == xg && y == yg) {
		flag = true;
		return;
	}
	for(int i = 0;i < 4;i++){
		int nx = x + dx[i],ny = y + dy[i];
		if(nx >= 0 && nx < w && ny >= 0 && ny < h && field[nx][ny] == c){
			field[nx][ny] = 0;
			dfs(nx,ny,c);
		}
	}
}

int main(){
	while(1){
		flag = false;
		cin >> w >> h;
		if(!w) break;
		for(int i = 0;i < w;i++){
			for(int j = 0;j < h;j++) field[i][j] = 0;
		}
		cin >> xs >> ys >> xg >> yg >> n; xs--;ys--;xg--;yg--;
		for(int i = 0;i < n;i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			if(d == 1){
				for(int k = 0;k < 2;k++){
					for(int j = 0;j < 4;j++) field[x + k - 1][y + j - 1] = c;
				}
			}else{
				for(int k = 0;k < 4;k++){
					for(int j = 0;j < 2;j++) field[x + k - 1][y + j - 1] = c;
				}
			}
		}
		if(field[xs][ys] == 0){
			cout << "NG" << endl;
			continue;
		}
		cc = field[xs][ys];
		field[xs][ys] = 0;
		dfs(xs,ys,cc);
		if(flag) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
	return 0;
}