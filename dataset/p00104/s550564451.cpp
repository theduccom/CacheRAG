#include <iostream>
#include <cstring>

constexpr int dx[]={0,-1,0,1,0},dy[]={0,0,-1,0,1};

int h,w;

int board[100][100];

bool used[100][100];

void dfs(int x,int y) {
	used[y][x]=true;

	if(!board[y][x]){
		std::cout<<x<<' '<<y<<std::endl;
		return;
	}

	int nx=dx[board[y][x]]+x,ny=dy[board[y][x]]+y;

	if(used[ny][nx]){
		std::cout<<"LOOP"<<std::endl;
		return;
	}

	dfs(nx,ny);

	used[y][x]=false;
}

int main() {
	while(1){
		std::cin>>h>>w;
		if(h+w==0)
			break;
		std::memset(board,0,sizeof(board));
		std::memset(used,0,sizeof(used));
		char ch;
		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j){
				std::cin>>ch;
				if(ch=='<')
					board[i][j]=1;
				else if(ch=='^')
					board[i][j]=2;
				else if(ch=='>')
					board[i][j]=3;
				else if(ch=='v')
					board[i][j]=4;
			}
		}
		dfs(0,0);
	}
	return 0;
}