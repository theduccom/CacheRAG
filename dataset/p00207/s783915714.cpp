#include<iostream>
#include<queue>
#include<cstring>

void putblock(int x,int y,int c,int d);
bool bfs(std::pair<int,int> start,std::pair<int,int> goal);

std::queue< std::pair<int,int> > que;
int board[102][102];
bool visited[102][102];

int main()
{
	int n,w,h,x,y,c,d,xs,ys,xg,yg;
	
	while(1)
	{
		while(!que.empty()){que.pop();}
		memset(board,0,sizeof(board));
		memset(visited,0,sizeof(visited));
		std::cin>>w>>h;
		if(w==0&&h==0)break;
		std::cin>>xs>>ys>>xg>>yg>>n;
		for(int i=0;i<n;i++)
		{
			std::cin>>c>>d>>x>>y;
			putblock(x,y,c,d);
		}

		if(bfs(std::pair<int,int>(xs,ys),std::pair<int,int>(xg,yg)))
		{
			std::cout<<"OK"<<std::endl;
		}
		else
		{
			std::cout<<"NG"<<std::endl;
		}
	}
	return 0;
}

void putblock(int x,int y,int c,int d)
{
	int h,w;
	if(d==0)
	{
		h=2;
		w=4;
	}
	else
	{
		h=4;
		w=2;
	}
	for(int i=y;i<y+h;i++)
	{
		for(int j=x;j<x+w;j++)
		{
			board[i][j]=c;
		}
	}
}

bool bfs(std::pair<int,int> start,std::pair<int,int> goal)
{
	int x,y;
	if(board[start.second][start.first]==0||board[goal.second][goal.first]==0)return false;
	
	que.push(start);
	while(!que.empty())
	{
		x=que.front().first;
		y=que.front().second;
		que.pop();
		visited[y][x]=true;

		if(x==goal.first&&y==goal.second)
		{
			return true;
		}

		if(board[y][x]==0){std::cin.get();}

		if(board[y-1][x]==board[y][x]&&!visited[y-1][x])que.push(std::pair<int,int>(x,y-1));
		if(board[y+1][x]==board[y][x]&&!visited[y+1][x])que.push(std::pair<int,int>(x,y+1));
		if(board[y][x-1]==board[y][x]&&!visited[y][x-1])que.push(std::pair<int,int>(x-1,y));
		if(board[y][x+1]==board[y][x]&&!visited[y][x+1])que.push(std::pair<int,int>(x+1,y));

	}
	return false;
}