#include <cstdio>
#include <iostream>
using namespace std;

char data[15][15];

void dfs(int x, int y);

int main(void)
{
	while (1){
		for (int i = 0; i < 12; i++){
			cin >> data[i];
		}
		if (cin.eof()) return 0;
		
		int res = 0;
		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 12; j++){
				if (data[i][j] == '1'){
//					printf("i >> %d, j >> %d\n", i, j);
					data[i][j] = '0';
					dfs(i, j);
					res++;
				}
			}
		}
		
		printf("%d\n", res);
	}
	
	return (0);
}

void dfs(int x, int y)
{
	if (data[x + 1][y] == '1' && (x + 1) < 12){
		data[x + 1][y] = '0';
		dfs(x + 1, y);
	}
	if (data[x - 1][y] == '1' && 0 <= (x - 1)){
		data[x - 1][y] = '0';
		dfs(x - 1, y);
	}
	if (data[x][y + 1] == '1' && (y + 1) < 12){
		data[x][y + 1] = '0';
		dfs(x, y + 1);
	}
	if (data[x][y - 1] == '1' && 0 <= (y - 1)){
		data[x][y - 1] = '0';
		dfs(x, y - 1);
	}
	
	return;
}