#include <cstdio>
#include <queue>
using namespace std;

int main(){
	char f[16][16] = {};
	int n, x, y;
	scanf("%d", &n);
	for(int d = 1; d <= n; ++d){
		for(int i = 0; i < 8; ++i){
			scanf(" %s", f[i + 4] + 4);
		}
		scanf("%d%d", &x, &y);

		queue<int> q;
		q.push(x + 3 << 8 | y + 3);

		while(!q.empty()){
			x = q.front() >> 8;
			y = q.front() & 0xff;
			for(int i = -3; i <= 3; ++i){
				if(f[y + i][x] == '1'){
					f[y + i][x] = '0';
					q.push(x << 8 | y + i);
				}
				if(f[y][x + i] == '1'){
					f[y][x + i] = '0';
					q.push(x + i << 8 | y);
				}
			}
			q.pop();
		}
		
		printf("Data %d:\n", d);
		for(int i = 0; i < 8; ++i){
			puts(f[i + 4] + 4);
		}
	}
}