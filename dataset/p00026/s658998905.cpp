#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define clear(v) memset(v,0,sizeof(v))
#define ALL(v) (v).begin(),(v).end()

int table[15][15];

void pnt1(int x, int y){
	int dx[] = { 1, 0, -1, 0 }, dy[] = { 0, 1, 0, -1 };
	rep(i, 4){
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < 10 && ny < 10){
			table[nx][ny]++;
		}
	}
	table[x][y]++;
}

void pnt2(int x, int y){
	int dx[] = { 1, 1, -1, -1 }, dy[] = { 1, -1, 1, -1 };
	pnt1(x, y);
	rep(i, 4){
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < 10 && ny < 10){
			table[nx][ny]++;
		}
	}
}

void pnt3(int x, int y){
	int dx[] = { 2, 0, -2, 0 }, dy[] = { 0, 2, 0, -2 };
	pnt2(x, y);
	rep(i, 4){
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && ny >= 0 && nx < 10 && ny < 10){
			table[nx][ny]++;
		}
	}
}

int main(){
	int x, y, size;
	while (scanf("%d,%d,%d",&x,&y,&size)!=EOF){
		if (size == 1) pnt1(x, y);
		else if (size == 2) pnt2(x, y);
		else pnt3(x, y);
	}
	int ans[2] = {};
	int max = 0;
	rep(i, 10) rep(j, 10) if (max < table[i][j]) max = table[i][j];
	rep(i, 10) rep(j, 10){
		if (table[i][j] == max) ans[0]++;
		if (table[i][j] == 0) ans[1]++;
	}
	printf("%d\n", ans[1]);
	printf("%d\n", max);
	return 0;
}