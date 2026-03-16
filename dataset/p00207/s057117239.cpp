#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
int main(){
	while (1) {
		int w,h,xs,ys,xg,yg,n;
		cin>>w>>h;
		if(!w) break;
		cin>>xs>>ys>>xg>>yg>>n;
		int board[w][h];
		bool visited[w][h];
		memset(board,0,sizeof board);
		memset(visited,0,sizeof visited);
		queue<pair<int,int>> que;
		que.emplace(--xs,--ys);
		visited[xs][ys] = true;
		xg--;yg--;
		int area[2][2][8] = {{{-1,0,1,2,-1,0,1,2},{-1,-1,-1,-1,0,0,0,0}},
		    {{-1,-1,-1,-1,0,0,0,0},{-1,0,1,2,-1,0,1,2}}};
		for (int i = 0; i < n; i++) {
			int c,d,x,y;
			cin>>c>>d>>x>>y;
			for (int i = 0; i < 8; i++)
				board[area[d][0][i]+x][area[d][1][i]+y] = c;
		}
		constexpr int dx[]={0,-1,1,0},dy[]={1,0,0,-1};
		while (!que.empty()) {
			auto now = que.front(); que.pop();
			for (int i = 0; i < 4; i++) {
				int nx = now.first+dx[i],ny = now.second+dy[i];
				if(nx >= 0 && nx < w && ny >= 0 && ny < h && board[nx][ny] == board[xs][ys] && !visited[nx][ny]){
					visited[nx][ny] = true;
					que.emplace(nx,ny);
				}
			}
		}
		puts((visited[xg][yg]) ? "OK" : "NG");
	}
	return 0;
}