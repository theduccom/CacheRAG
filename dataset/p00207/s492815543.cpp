#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<map>
#include<queue>
#include<set>

using namespace std;
typedef pair<int,int> PII;
typedef long long ll;

int xs,ys,xg,yg;
int board[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool dfs(int x,int y,int c){
	if(board[y][x] != c) return false;
	if(x == xg && y == yg) return true;
	board[y][x] = 0;
	bool flag = false;
	for(int dir = 0;dir<4;dir++){
		if(dfs(x+dx[dir],y+dy[dir],c)){
			flag = true;
			break;
		}
	}
	return flag;
}

int main(){
	int w,h;
	int n,col;
	int c,d,x,y;
	int pos0_x[8] = {0,0,1,1,2,2,3,3};
	int pos0_y[8] = {0,1,0,1,0,1,0,1};
	int pos1_x[8] = {0,0,0,0,1,1,1,1};
	int pos1_y[8] = {0,1,2,3,0,1,2,3};

	while(true){
		cin>>w>>h;
		if(!w&&!h)break;
		cin>>xs>>ys>>xg>>yg>>n;
		for(y = 0;y<102;y++)
			for(x = 0;x<102;x++)
				board[y][x] = 0;
		for(int i = 0;i < n;i++){
			cin>>c>>d>>x>>y;
			if(d==0){
				for(int j = 0;j<8;j++)
					board[y+pos0_y[j]][x+pos0_x[j]] = c;
			}
			else{
				for(int j = 0;j<8;j++)
					board[y+pos1_y[j]][x+pos1_x[j]] = c;
			}
		}
		col = board[ys][xs];
		if(col==0)col=6;
		if(dfs(xs,ys,col))
			cout<<"OK"<<endl;
		else
			cout<<"NG"<<endl;
	}
	return 0;
}