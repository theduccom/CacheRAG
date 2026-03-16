#include <iostream>

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;


string table[8];


void dfs(int x,int y){
	table[y][x]='0';
	//cerr << "check" << endl;
	for(int dx=-3;dx<=3;dx++){
		if(0<=x+dx&&x+dx<8&&table[y][x+dx]=='1'){
			table[y][x+dx]='0';
			dfs(x+dx,y);
		}
	}
	for(int dy=-3;dy<=3;dy++){
		if(0<=y+dy&&y+dy<8&&table[y+dy][x]=='1'){
			table[y+dy][x]='0';
			dfs(x,y+dy);
		}
	}
	return ;
}

int main(void){
	int t;
	cin >> t;
	rep(loop,t){
		rep(y,8) cin >> table[y];
		int bx,by;
		cin >> bx >> by;
		dfs(bx-1,by-1);
		cout << "Data " << loop+1 << ":" << endl;
		rep(y,8)
			cout <<  table[y] << endl;
	}
	return 0;
}