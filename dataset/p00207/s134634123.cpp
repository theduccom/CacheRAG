#include <iostream>
#include <cstring>

using namespace std;

int w, h, xs, ys, xg, yg, n;
int field[1024][1024];
bool vis[1024][1024];

int dx[2][8] = { {0,1,2,3,0,1,2,3}, {0,1,0,1,0,1,0,1}};
int dy[2][8] = { {0,0,0,0,1,1,1,1}, {0,0,1,1,2,2,3,3}};

void rec(int x, int y, int c){
	
	if( vis[y][x] || x <= 0 || w < x || y <= 0 || h < y || field[y][x] != c )
		return;
	
	vis[y][x] = true;
	
	rec(x+1, y, c);
	rec(x-1, y, c);
	rec(x, y+1, c);
	rec(x, y-1, c);
	
	return;
}

int main()
{
	while(cin >> w >> h, (w||h)){
	
		memset(field,0,sizeof(field));
		memset(vis,0,sizeof(vis));
		
		cin >> xs >> ys;
		cin >> xg >> yg;
		
		cin >> n;
		
		for(int k = 0; k < n; ++k){
			
			int c, d, x, y;
			
			cin >> c >> d >> x >> y;
			
			for(int i = 0; i < 8; ++i){
				
				field[y+dy[d][i]][x+dx[d][i]] = c;
			}
		}
		
		
		rec(xs,ys,field[ys][xs]);
		
		cout << (vis[yg][xg]?"OK":"NG") << endl;
	
	}
	
	return 0;
}