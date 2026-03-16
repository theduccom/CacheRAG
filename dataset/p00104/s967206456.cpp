#include <iostream>

using namespace std;

char tile[101][101];
bool visited[101][101];

int main(){
	int w,h;
	while(1){
		int x,y;
		cin >> h >> w;
		for(int i=0;i < h;i++)
			for(int j=0;j < w;j++)
				visited[i][j] = false;
		if(!(w|h)) break;
		for(int i=0;i < h;i++)
			for(int j=0;j < w;j++)
			 cin >> tile[i][j];
		x = y = 0;
		while(1){
			if(visited[x][y] == false) visited[x][y] = true;
			else {
				x = y = 10000;break;
			}
			if(tile[x][y] == '>') y++;
			else if(tile[x][y] == 'v') x++;
			else if(tile[x][y] == '^') x--;
			else if(tile[x][y] == '<') y--;
			else if(tile[x][y] == '.') break;
		}
		if(x == 10000){
			cout << "LOOP" << endl;
	    }
		else cout << y << ' ' << x << endl;
	}
	
	return 0;
}