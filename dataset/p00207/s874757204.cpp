#include <iostream>
#include <queue>
#include <utility>
using namespace std;

#define x first
#define y second

typedef pair<int,int> pii;

const int margin = 2;
int maze[128][128];
bool visited[128][128];
int h, w;

int main() {
	while(cin >> w >> h, w || h) {
		for(int i = 0; i < 128; i++){
			for(int j = 0; j < 128; j++) {
				maze[i][j] = -1;
				visited[i][j] = false;
			}
		}
		pii s, g;
		cin >> s.x >> s.y; s.x--; s.y--;
		cin >> g.x >> g.y; g.x--; g.y--;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			int c, d, x_, y_;
			int l[][2] = {{2,4},{4,2}};
			cin >> c >> d >> x_ >> y_; x_--; y_--;
			for(int i = 0; i < l[d][0]; i++) {
				for(int j = 0; j < l[d][1]; j++) {
					maze[y_+i + margin][x_+j + margin] = c;
				}
			}
		}

		queue<pii> q;
		q.push(s);
		bool flg = false;
		while(!q.empty()) {
			pii cur;
			cur = q.front(); q.pop();

			if(cur == g) {
				flg = true;
				break;
			}

			int dx[] = {1,-1,0,0};
			int dy[] = {0,0,1,-1};
			for(int i = 0; i < 4; i++) {
				if(maze[cur.y+margin][cur.x+margin] == maze[cur.y+dy[i]+margin][cur.x+dx[i]+margin] && !visited[cur.y+dy[i]+margin][cur.x+dx[i]+margin]) {
					q.push(pii(cur.x+dx[i], cur.y+dy[i]));
					visited[cur.y+dy[i]+margin][cur.x+dx[i]+margin] = true;
				}
			}
		}

		if(flg)
			cout << "OK" << endl;
		else
			cout << "NG" << endl;
	}
}