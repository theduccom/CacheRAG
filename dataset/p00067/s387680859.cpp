#include <iostream>
using namespace std;
const int n = 12,m = 12;
char map[n][m+1];
void dfs(int x,int y){
	int dx[] = {-1,0,0,1},dy[] = {0,-1,1,0};
	map[x][y] = '0';
	for(int i=0;i<4;i++){
		int nx = x+dx[i],ny = y+dy[i];
		if (nx > -1 && nx < n && ny > -1 && ny < m && map[nx][ny] == '1') dfs(nx,ny);
	}
}
int main(){
	int count;
	while(1){
		count = 0;
		for(int i=0;i<n;i++){
			cin >> map[i];
		}
		if (cin.eof()) break;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(map[i][j] == '1'){
					dfs(i,j);
					count++;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}