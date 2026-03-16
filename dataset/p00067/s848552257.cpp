#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int maze[12][12];

bool check(int x, int y){
	return x >= 0 && x < 12 && y >= 0 && y < 12 && maze[x][y] == 1;
}
void dfs(int x, int y){
	
	maze[x][y] = 0;
	for(int i = 0; i < 4; ++i){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(check(nx, ny))
			dfs(nx, ny);
	}
}


int main() {
	while(1){
		string s;
		for(int i = 0; i < 12; ++i){
			cin >> s;
			for(int j = 0; j < 12; ++j)
				maze[i][j] = s[j] - '0';
		}
		if(cin.eof())
			break;
			
		int ans = 0;
		for(int i = 0; i < 12; ++i){
			for(int j = 0; j < 12; ++j){
				if(maze[j][i] == 1){
					dfs(j, i);
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}