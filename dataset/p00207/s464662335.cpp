#include<iostream>
#include<queue>
using namespace std;

class Point{
public:
	Point() : x(0), y(0){}
	Point(int ax, int ay) : x(ax), y(ay){}
	int x, y;
};

int field[100][100] = {0};
bool checked[100][100] = {0};
int w, h, n;
Point s, g;

const Point dire4[4] = {Point(-1, 0), Point(1, 0), Point(0, -1), Point(0, 1)};

bool isEnabled(int x, int y){
	return (0 <= x && x < w && 0 <= y && y < h);
}

int main(){
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		
		for(int y = 0;y < h;y++){
			for(int x = 0;x < w;x++){
				field[x][y] = 0;
				checked[x][y] = false;
			}
		}
		
		cin >> s.x >> s.y >> g.x >> g.y >> n;
		s.x--; s.y--; g.x--; g.y--;
		for(int i = 0;i < n;i++){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			x--; y--;
			int tw = ((d == 0)? 4 : 2), th = ((d == 0)? 2 : 4);
			for(int iy = 0;iy < th;iy++){
				for(int ix = 0;ix < tw;ix++){
					field[x + ix][y + iy] = c;
				}
			}
		}
		
		bool res = false;
		
		queue<Point> que;
		que.push(s);
		while(!que.empty()){
			Point p = que.front();
			que.pop();
			if(p.x == g.x && p.y == g.y){
				res = true;
				break;
			}
			for(int i = 0;i < 4;i++){
				int x = p.x + dire4[i].x, y = p.y + dire4[i].y;
				if(isEnabled(x, y) && field[p.x][p.y] == field[x][y] && !checked[x][y]){
					que.push(Point(x, y));
					checked[x][y] = true;
				}
			}
		}
		
		if(res) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
	
	return 0;
}