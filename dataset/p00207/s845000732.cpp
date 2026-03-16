#include <iostream>
#include <queue>
#include <cstring>
const int MAX_W = 100, MAX_H = 100;

typedef std::pair<int,int> P;
int map[MAX_H + 1][MAX_W + 1];

int bfs(P sp, P gp, int w, int h, int c){
	//½±Æª é©ði[
	int f[MAX_H + 1][MAX_W + 1] = {{0}};
	std::queue<P> q;
	q.push(P(sp.first, sp.second));
	
	while(q.size()){
		P p = q.front(); q.pop();
		//S[Å«½ç¬÷
		if(p.first == gp.first && p.second == gp.second && map[p.second][p.first] == c)return 1;
		
		int vy[4] = {-1,1,0,0}, vx[4] = {0,0,-1,1};
		for(int i=0;i<4;i++){
			int nx = p.first + vx[i],
				ny = p.second + vy[i];
			if(nx >= 0 && nx <= w && ny >= 0 && ny <= h && 
				 map[ny][nx] == c && !f[ny][nx]){
				q.push(P(nx,ny));
				f[ny][nx] = 1;
			}
		}
	}

	//ÅãÜÅS[Å«È¢Èç¸s
	return 0;
}

int main(){
	int w, h, xs, ys, xg, yg;
	while(std::cin >> w >> h, w&&h){
		memset(map,0,sizeof(map));
		std::cin >> xs >> ys;
		std::cin >> xg >> yg;

		int n;
		std::cin >> n;

		//ubNÌÝu
		while(n--){
			int c, d, x, y;
			std::cin >> c >> d >> x >> y;
			
			int mx, my;
			if(d)//w < h
				{my = 4, mx = 2;}
			else//w > h
				{mx = 4, my = 2;}
			for(int i=y;i<y+my;i++){
				for(int j=x;j<x+mx;j++){
					map[i][j] = c;
				}
			}
		}

		//bfsÅS[Å«é©mF
		P sp = P(xs,ys), gp = P(xg,yg);
		int c = map[ys][xs];
		if(bfs(sp, gp, w, h, c))std::cout << "OK" << std::endl;
		else{std::cout << "NG" << std::endl;}
	}
}