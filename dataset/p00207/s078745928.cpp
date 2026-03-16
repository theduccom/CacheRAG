#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define INF (2000000000)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

int map[200][200];
bool done[200][200];

int xg, yg;

void Search(int y, int x)
{
	done[y][x] = true;
	for (int i = 0; i < 4; i++){
		if (!done[y + dy[i]][x + dx[i]] && map[y][x] == map[y + dy[i]][x + dx[i]]){
			Search(y + dy[i], x + dx[i]);
		}
	}
}

int main()
{
	int w, h;
	while (scanf("%d %d", &w, &h), w + h){
		memset(map, 0, sizeof(map));
		memset(done, 0, sizeof(done));
		
		int xs, ys;
		scanf("%d %d %d %d", &xs, &ys, &xg, &yg);
		
		int n;
		scanf("%d", &n);
		
		for (int i = 0; i < n; i++){
			int c, d, x, y;
			scanf("%d %d %d %d", &c, &d, &x, &y);
			
			int a = 2, b = 4;
			if (d == 1){
				swap(a, b);
			}
			
			for (int j = y; j < y + a; j++){
				for (int k = x; k < x + b; k++){
					map[j][k] = c;
				}
			}
		}
		
		if (map[ys][xs]) Search(ys, xs);
		
		printf(done[yg][xg] ? "OK\n" : "NG\n");
	}
	
	return 0;
}