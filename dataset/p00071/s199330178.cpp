#include <cstdio>
#include <queue>
#include <map>
using namespace std;

char data[12][12];
int move[] = {-3, -2, -1, 1, 2, 3};

int main(void)
{
	int n;
	char c;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 12; j++){
			for (int k = 0; k < 12; k++){
				data[j][k] = '0';
			}
		}
		scanf("%c", &c);
		for (int j = 0; j < 8; j++){
			scanf("%s", data[j]);
		}
		int x, y;
		scanf("%d %d", &x, &y);
		
		queue <int> qx, qy;
		qx.push(y - 1);
		qy.push(x - 1);
		data[y - 1][x - 1] = '0';
		
		pair <int, int> now;
		while (!qx.empty()){
			now.first = qx.front();
			now.second = qy.front();
			qx.pop();
			qy.pop();
			for (int j = 0; j < 6; j++){
				if (data[now.first + move[j]][now.second] == '1' && 0 <= now.first + move[j]){
					data[now.first + move[j]][now.second] = '0';
//					printf("!!	%d %d\n", now.first + move[j], now.second);
					qx.push(now.first + move[j]);
					qy.push(now.second);
				}
				if (data[now.first][now.second + move[j]] == '1' && 0 <= now.second + move[j]){
					data[now.first][now.second + move[j]] = '0';
//					printf("!!	%d %d\n", now.first, now.second + move[j]);
					qx.push(now.first);
					qy.push(now.second + move[j]);
				}
				
			}
		}
		
		printf("Data %d:\n", i + 1);
		for (int j = 0; j < 8; j++){
			printf("%s\n", data[j]);
		}
		scanf("%c", &c);
	}
	
	return (0);
}