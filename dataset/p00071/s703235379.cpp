#include <cstdio>

using namespace std;

char mp[10][10];

int dx[14] = {1, -1, 0, 0, 2, -2, 0, 0, 3, -3, 0, 0};
int dy[14] = {0, 0, 1, -1, 0, 0, 2, -2, 0, 0, 3, -3};

void def(int x, int y){
	mp[y][x] = '0';
	
	for (int i = 0; i < 12; i++){
		int tx = x + dx[i];
		int ty = y + dy[i];
		
		if (mp[ty][tx] == '1' && ty < 8 && tx < 8) def(tx, ty);
	}
}

int main(){
	
	int n;
	int x, y;
	int cc = 0;

	scanf("%d", &n);
	
	for (int num = 0; num < n; num++){
		
		for (int i = 0; i < 8; i++){
			scanf("%s",  mp[i]);
		}
		scanf("%d %d", &x, &y);
		def(x - 1, y - 1);
		
		printf("Data %d:\n", num + 1);
		
		for (int i = 0; i < 8; i++){
			printf("%s\n",  mp[i]);
		}
	}
}