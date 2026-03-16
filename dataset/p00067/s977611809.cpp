#include <cstdio>
#include <iostream>
using namespace std;

char map[13][13];
int da[] = {1, 0, -1, 0};
int db[] = {0, 1, 0, -1};

void dfs(int a, int b){
	if(a < 0 || a >= 12 || b < 0 || b >= 12 || map[a][b] == '0')	return;
	map[a][b] = '0';
	for(int i = 0; i < 4; i++){
		dfs(a + da[i], b + db[i]);
	}
	return;
}

int main(void){
	while(true){
		int cnt = 0;
		
		for(int i = 0; i < 12; i++){
			if(scanf("%s", map[i]) == EOF)	return 0;
		}

		for(int i = 0; i < 12; i++){
			for(int j = 0; j < 12; j++){
				if(map[i][j] == '1'){
					dfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
  return 0;
}