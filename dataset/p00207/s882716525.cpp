#include <iostream>
#include <queue>
#include <utility>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
#define pint pair<int,int>
using namespace std;
int main(){
	int dx[4] = {-1,0,1,0};
	int dy[4] = {0,1,0,-1};
	int w,h,xs,ys,xg,yg,n;
	while(cin >> w >> h && (w || h)) {
		cin >> xs >> ys >> xg >> yg >> n;
		int b[110][110] = {};
		int	c,d,x,y;
		rep(i,n) {
			cin >> c >> d >> x >> y;
			rep(j,2) {
				rep(k,4) {
					if(d==0) b[y+j][x+k] = c;
					else b[y+k][x+j] = c;
				}
			}
		}
		if(b[ys][xs] != b[yg][xg] || b[ys][xs] == 0) {
			cout << "NG" << endl;
			continue;
		}
		queue<pint> q;
		pint p;
		p.first = ys, p.second = xs;
		q.push(p);
		const int b_color = b[ys][xs];
		bool f = 0;
		while(!q.empty()) {
			pint a = q.front(); q.pop();
			b[a.first][a.second] = 0;
			if(a.first == yg && a.second == xg) {
				f = 1;
				break;
			}
			rep(i,4) {
				if(b[a.first+dy[i]][a.second+dx[i]] == b_color) {
					pint e;
					e.first = a.first+dy[i], e.second = a.second+dx[i];
					q.push(e);
				}
			}
		}
		if(f) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
}