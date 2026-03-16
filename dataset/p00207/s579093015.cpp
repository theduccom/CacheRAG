#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <string>

#define Pa pair<int,int>

using namespace std;


string bfs(int a[101][101], int sx, int sy, int gx, int gy, int w, int h)
{
	int s, t, m = a[sy][sx];
	int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
	bool vis[101][101];
	string str = "NG";
	queue<Pa> que;
	Pa pa;
	fill(&vis[1][1], &vis[h][w], true);
	
	que.push(Pa(sy, sx));
	vis[sy][sx] = false;
	
	while(!que.empty()){
		pa = que.front();
		que.pop();
		if(pa.first == gy && pa.second == gx){
			str = "OK";
			break;
		}
		
		for(int i = 0; i < 4; i++){
			s = pa.first + dy[i];
			t = pa.second + dx[i];
			if(1 <= s && s <= h && 1 <= t && t <= w){
				if(vis[s][t] && m == a[s][t]){
					que.push(Pa(s, t));
					vis[s][t] = false;
				}
			}
		}
	}
	
	return str;
}

int main()
{
	int a[101][101], w, h, sx, sy, gx, gy, s, t, u, v, n;
	
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0){
			break;
		}
		fill(&a[1][1], &a[h][w], 0);
		cin >> sx >> sy;
		cin >> gx >> gy;
		cin >> n;
		
		while(n--){
			cin >> s >> t >> u >> v;
			if(t == 0){
				for(int i = v; i <= v+1; i++){
					for(int j = u; j <= u+3; j++){
						a[i][j] = s;
					}
				}
			} else {
				for(int i = v; i <= v+3; i++){
					for(int j = u; j <= u+1; j++){
						a[i][j] = s;
					}
				}
			}
		}
		
		cout << bfs(a, sx, sy, gx, gy, w, h) << endl;
	}
	
	return 0;
}