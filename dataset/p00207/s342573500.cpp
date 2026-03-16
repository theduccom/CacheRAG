// 0207
#include <iostream>
#include <vector>
using namespace std;

void maze_fill(vector<vector<int> > &maze, int c, int d, int x, int y){
	int w, h;
	if(d == 0){
		w = 4;
		h = 2;
	}else{
		w = 2;
		h = 4;
	}

	for(int i=y;i<y+h;i++)
		for(int j=x;j<x+w;j++)
			maze[i][j] = c;
}

void search(vector<vector<int> > &maze, int x, int y, int c){
	maze[y][x] = 6;

	if(maze[y-1][x] == c)
		search(maze, x, y-1, c);
	
	if(maze[y][x-1] == c)
		search(maze, x-1, y, c);
	
	if(maze[y+1][x] == c)
		search(maze, x, y+1, c);
	
	if(maze[y][x+1] == c)
		search(maze, x+1, y, c);
}

int main(){
	while(1){
		int w, h, xs, ys, xg, yg, n;
		vector<vector<int> > maze;

		cin>>w>>h;
		if((w == 0) && (h == 0))
			break;

		maze.resize(h+2);
		for(int i=0;i<h+2;i++)
			maze[i].resize(w+2);

		for(int i=0;i<h+2;i++){
			if((i == 0) || (i == h+1)){
				for(int j=0;j<w+2;j++)
					maze[i][j] = 9;
			}else{
				maze[i][0] = 9;
				maze[i][w+1] = 9;
				for(int j=1;j<w+1;j++)
					maze[i][j] = 0;
			}
		}

		cin>>xs>>ys;
		cin>>xg>>yg;
		cin>>n;
		for(int i=0;i<n;i++){
			int c, d, x, y;
			cin>>c>>d>>x>>y;
			maze_fill(maze, c, d, x, y);
		}
		
		search(maze, xs, ys, maze[ys][xs]);

		if(maze[ys][xs] == maze[yg][xg])
			cout<<"OK"<<endl;
		else
			cout<<"NG"<<endl;
	}

	return 0;
}