#include <queue>
#include <utility>
#include <cstdio>
using namespace std;

typedef pair<int, int> P;

char map[16][16];

void bfs(int y, int x)
{
	queue<P> q;
	
	q.push(P(y, x));
	while (!q.empty()){
		P p = q.front();
		q.pop();
		
		if (map[p.first][p.second] == '1'){
			q.push(P(p.first - 1, p.second));
			q.push(P(p.first + 1, p.second));
			q.push(P(p.first, p.second - 1));
			q.push(P(p.first, p.second + 1));
		}
		map[p.first][p.second] = 0;
	}
}

int main()
{
	while (scanf("%s", &map[1][1]) != EOF){
		int cnt = 0;
		for (int i = 2; i <= 12; i++) scanf("%s", &map[i][1]);
		for (int i = 1; i <= 12; i++){
			for (int j = 1; j <= 12; j++){
				if (map[i][j] == '1'){
					bfs(i, j);
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}