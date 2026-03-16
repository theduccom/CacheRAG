#include <cstdio>
#include <iostream>
using namespace std;

void dfs(int x, int y);
char data[16][16];

int main(void)
{
	char c;
	
	while (1){
		
		for (int i = 0; i < 12; i++){
			cin >> data[i];
		}
		if (cin.eof()) return (0);
		
		int res = 0;
		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 12; j++){
				if (data[i][j] == '1'){
					dfs(i, j);
					res++;
				}
			}
		}
		
		printf("%d\n", res);
		scanf("%c", &c);
	}
	
	return (0);
}

void dfs(int x, int y)
{
	data[x][y] = '0';
	
	if (data[x - 1][y] == '1' && 0 <= (x - 1)){
		dfs(x - 1, y);
	}
	if (data[x + 1][y] == '1'){
		dfs(x + 1, y);
	}
	if (data[x][y - 1] == '1' && 0 <= (y - 1)){
		dfs(x, y - 1);
	}
	if (data[x][y + 1] == '1'){
		dfs(x, y + 1);
	}
	
	return;
}