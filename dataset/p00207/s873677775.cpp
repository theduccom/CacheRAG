#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>

using namespace std;

#define reep(i,f,t) for(int i=f ; i<int(t) ; ++i)
#define rep(i,n) reep(i, 0, n) 

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main()
{
	int h, w;
	while(scanf("%d%d", &w, &h), w){
		int ys, xs, yg, xg;
		scanf("%d%d%d%d", &xs, &ys, &xg, &yg);
		--ys; --xs; --yg; --xg;
		
		vvi field(h, vi(w, 0));
		int n;
		scanf("%d", &n);
		rep(i, n){
			int c, d, x, y;
			scanf("%d%d%d%d", &c, &d, &x, &y);
			--x; --y;
			rep(j, d?4:2){
				rep(k, d?2:4){
					field[y+j][x+k] = c;
				}
			}
		}
		
		int road = field[ys][xs];
		if(!road)
			puts("NG");
		else{
			vector<vector<bool> > visited(h, vector<bool>(w, false));
			queue<pii> Q;
			Q.push(pii(ys, xs));
			bool ok = false;
			while(!Q.empty()){
				pii pos = Q.front();
				Q.pop();
				if(visited[pos.first][pos.second])
					continue;
				visited[pos.first][pos.second] = true;
				if(pii(yg, xg) == pos){
					ok = true;
					break;
				}
				
				const int dy[] = {-1, 0, 0, 1};
				const int dx[] = {0, -1, 1, 0};
				rep(i, 4){
					int py = pos.first + dy[i];
					int px = pos.second + dx[i];
					if(py<0 || h<=py || px<0 || w<=px || field[py][px]!=road)
						continue;
					Q.push(pii(py, px));
				}
			}
			puts(ok ? "OK" : "NG");
		}
	}
	
	return 0;
}