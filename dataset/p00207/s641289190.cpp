#include <cstdio>
#include <cstring>

using namespace std;

int map[128][128];
int sx, sy, gx, gy;
int sc;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool dfs(int ty, int tx)
{
	if (ty == gy && tx == gx){
		return (true);
	}
	
	map[ty][tx] = -1;
	
	for (int i = 0; i < 4; i++){
		if (map[ty + dy[i]][tx + dx[i]] == sc){
			if (dfs(ty + dy[i], tx + dx[i]) == true){
				return (true);
			}
		}
	}
	
	return (false);
}

int main()
{
	int w, h;
	int n;
	
	while (scanf("%d %d", &w, &h) && w){
		memset(map, -1, sizeof(map));
		scanf("%d %d", &sx, &sy);
		scanf("%d %d", &gx, &gy);
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++){
			int col, dir, tx, ty;
			scanf("%d %d %d %d", &col, &dir, &tx, &ty);
			if (dir == 0){
				for (int dy = 0; dy < 2; dy++){
					for (int dx = 0; dx < 4; dx++){
						map[ty + dy][tx + dx] = col;
					}
				}
			}
			else {
				for (int dy = 0; dy < 4; dy++){
					for (int dx = 0; dx < 2; dx++){
						map[ty + dy][tx + dx] = col;
					}
				}
			}
		}
		sc = map[sy][sx];
		printf("%s\n", ~sc && dfs(sy, sx) == true ? "OK" : "NG");
	}
	
	return (0);
}