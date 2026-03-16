#include <cstdio>

using namespace std;

char mp[15][15] = {0};
int dx[5] = {0, 0, 1, -1};
int dy[5] = {1, -1, 0, 0};

void def(int y, int x){
	mp[y][x] = 0;
	for (int i = 0; i < 4; i++){
		int ty = y + dy[i];
		int tx = x + dx[i];
		if (mp[ty][tx] == '1') def(ty, tx);
	}
}

int main()
{
	int pi, pj;
	int cnt;
	while (scanf("%s", mp[0]) != EOF){
		cnt = 0;
		
		for (int i = 1; i < 12; i++) scanf("%s", mp[i]);
		
		for (int i = 0; i < 12; i++){
			for (int j = 0; j < 12; j++){
				if (mp[i][j] == '1'){
					def(i, j);
					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
}