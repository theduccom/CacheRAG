#include <iostream>
using namespace std;
char board[12][12];

void f(int y,int x){
	board[y][x] = '\0';
	int dx[] = {0,-1,1,0},dy[] = {1,0,0,-1};
	for(int i = 0;i < 4;++i){
		int tx = x + dx[i],ty = y + dy[i];
		if(-1 < tx && tx < 12 && -1 < ty && ty < 12){
			if(board[ty][tx] == '1') f(ty,tx);
		}
	}
	return;
}

int main(){
	int c;
	char a[13];
	while(cin >> a){
		c = 0;
		if(a[0] == ' ') continue;
		else for(int i = 0;i < 12;++i) board[0][i] = a[i];
		for(int i = 1;i < 12;++i){
			cin >> board[i];
		}
		for(int i = 0;i < 12;++i){
			for(int j = 0;j < 12;++j){
				if(board[i][j] == '1'){
					f(i,j);
					++c;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}