#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

int maze[110][110];
int f[110][110];
int w, h, xs, ys, xg, yg, res = 0;
int color;

void dfs(int cy, int cx){
	if(f[cy][cx]) return ;
	f[cy][cx] = 1;
	if(cy == yg && cx == xg){
		res = 1;
		return ;
	}
	for(int dx=-1; dx<=1; ++dx){
		for(int dy=-1; dy<=1; ++dy){
			if(abs(dx-dy) != 1) continue;
			int nx = cx + dx, ny = cy + dy;
			if(maze[ny][nx] == color){
				dfs(ny, nx);
			}
		}
	}
	return ;
}


int main(void){
	int n;
	while(cin >> w >> h){
		res = 0;
		if(w == 0 && h == 0) break;
		cin >> xs >> ys >> xg >> yg >> n;
		for(int i=0; i<110; ++i){
			for(int j=0; j<110; ++j){
				maze[i][j] = 6;
				f[i][j] = 6;
			}
		}
		for(int i=1; i<=h; ++i){
			for(int j=1; j<=w; ++j){
				maze[i][j] = 0;
				f[i][j] = 0;
			}
		}

		for(int i=0; i<n; ++i){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			if(d == 0){
				for(int j=y; j<=y+1; ++j){
					for(int k=x; k<=x+3; ++k){
						maze[j][k] = c;
					}
				}
			}
			if(d == 1){
				for(int j=y; j<=y+3; ++j){
					for(int k=x; k<=x+1; ++k){
						maze[j][k] = c;
					}
				}
			}
		}

		color = maze[ys][xs];
		if(color == 0){
			cout << "NG" << endl;
			continue;
		}

		dfs(ys, xs);

		if(res){
			cout << "OK" << endl;
		} else {
			cout << "NG" << endl;
		}
	}

	return 0;
}