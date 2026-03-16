#include <iostream>
#include <cstring>
using namespace std;

//bool b;
//int xg , yg;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int board[105][105];
int  sc;
/*
void dfs(int x , int y ,int w , int h){
	if(x==xg&&y==yg) {
		b=true;
		return;
	}
	for(int i=0;i<4;++i){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(tx<=0 || ty<=0 || tx>w || ty>h || board[tx][ty]!=sc || board[tx][ty]==0 || b ) continue;
		dfs( tx , ty , w , h );
	}
}
*/

void dfs(int x , int y , int w , int h){
	if(x<=0 || y<=0 || x>w || y >h) return;
	if(board[x][y]==sc){
		board[x][y]=10;
		for(int i=0;i<4;++i){
			dfs(x+dx[i] , y+dy[i] , w , h);
		}
	}
}
int main(){
	int w , h;
	while(cin >> w >> h , w|h){
		int xs , ys , n;
		int xg , yg;
		memset(board,0,sizeof(board));
		cin >> xs >> ys >> xg >> yg >> n;
		for(int i=0;i<n;++i){
			int c , d , x , y;
			cin >> c >> d >> x >> y;
			if(!d){
				for(int k=y;k<y+2;++k){
					for(int j=x;j<x+4;++j){
						board[j][k]=c;
					}
				}
			} else {
				for(int k=y;k<y+4;++k){
					for(int j=x;j<x+2;++j){
						board[j][k]=c;
					}
				}
			}
		}
		sc=board[xs][ys];
		dfs( xs , ys , w , h );
		cout << ( board[xg][yg]==10 ? "OK" : "NG") << endl;
	}
	return 0;
}