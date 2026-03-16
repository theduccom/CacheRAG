#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int paper[10][10];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int dx2[] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy2[] = {1, 0, -1, -1, -1, 0, 1, 1};
void make_spot(int x, int y, int s){
	paper[x][y]++;
	int nx, ny;
	if(s == 1){
		for(int i = 0; i < 4; i++){
			nx = x + dx[i], ny = y + dy[i];
			if(nx < 0 || nx >= 10 || ny < 0 || ny >= 10) continue;
			paper[nx][ny]++;
		}
	}else if(s == 2){
		for(int i = 0; i < 8; i++){
			nx = x + dx2[i], ny = y + dy2[i];
			if(nx < 0 || nx >= 10 || ny < 0 || ny >= 10) continue;
			paper[nx][ny]++;
		}
	}else if(s == 3){
		for(int i = 0; i < 8; i++){
			nx = x + dx2[i], ny = y + dy2[i];
			if(nx < 0 || nx >= 10 || ny < 0 || ny >= 10) continue;
			paper[nx][ny]++;
		}
		for(int i = 0; i < 4; i++){
			nx = x + 2 * dx[i], ny = y + 2 * dy[i];
			if(nx < 0 || nx >= 10 || ny < 0 || ny >= 10) continue;
			paper[nx][ny]++;
		}
	}
	return ;
}
int main(){
	fill(paper[0], paper[10], 0);
	for(;;){
		int x, y, s;
		if(scanf("%d,%d,%d", &x, &y, &s) == EOF) break;
		make_spot(x, y, s);
	}
	int cnt = 0, max_density = 0;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(paper[i][j] == 0) cnt++;
			if(paper[i][j] > max_density) max_density = paper[i][j];
		}
	}
	cout << cnt << endl << max_density << endl;
	return 0;
}
