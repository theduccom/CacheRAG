#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

char str[8][9];

bool check(int x, int y) {
	return x >= 0 && x < 8 && y >= 0 && y < 8;
}

void dfs(int x, int y){
	str[y][x] = '0';
	for (int i = -3; i <= 3; i++){
		int nx = x, ny = y + i;
		if (!check(nx, ny) || str[ny][nx] == '0') continue;
		 dfs(nx, ny);
	}
		
	for (int i = -3; i <= 3; i++) {
		int nx = x + i, ny = y;
		if (!check(nx, ny) || str[ny][nx] == '0') continue;
		dfs(nx, ny);
	}
}

int main(){
	int n, x, y;
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 8; j++){
			scanf("%s", &str[j]);
		}
		scanf("%d%d", &x, &y);
		dfs(x-1, y-1);
		printf("Data %d:\n", i+1);
		for (int j = 0; j < 8; j++){
			puts(str[j]);
		}
	}
	return 0;
}