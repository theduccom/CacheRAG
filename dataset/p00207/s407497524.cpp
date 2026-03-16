#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FFOR(i,a,b) for(int i=(a);i<=(b);i++)
#define REP(i,b) FOR(i,0,b)
#define RREP(i,b) FFOR(i,1,b)
#define PB push_back
#define F first
#define S second
#define BE(c) c.begin(),c.end()
using namespace std;
typedef long long LL;
typedef LL ut;
typedef long double ld;
typedef pair<ut,ut> pr;
typedef vector<pr> Vpr;
typedef vector<ut> VI;
typedef pair<ut,pr> ppr;
typedef priority_queue<pr,Vpr, greater<pr> > PQ;
const int SIZE=5+3*1e+4;
const ut INF=1<<30;
const ld eps=1e-6;
const LL p=7+1e+9;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int W, H;
int xs, ys, xg, yg;
int N, C;
int maze[128][128];

int dfs(int x, int y){
	if(x == xg && y == yg)
		return 1;
	maze[y][x] = 0;
	REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(maze[ny][nx] == C){
			if(dfs(nx, ny))
				return 1;
		}
	}
	return 0;
}

int main(){
	while(cin >> W >> H && (W || H)){
		memset(maze, 0, sizeof(maze));
		cin >> xs >> ys >> xg >> yg >> N;
		int c, d, x, y;
		REP(i,N){
			cin >> c >> d >> x >> y;
			if(d == 0){
				REP(j,2)
					REP(k,4)
						maze[y + j][x + k] = c;
			}
			else{
				REP(j,4)
					REP(k,2)
						maze[y + j][x + k] = c;
			}
		}
		C = maze[ys][xs];
		if(C == 0){
			cout << "NG" << endl;
			continue;
		}
		if(dfs(xs, ys)){
			cout << "OK" << endl;
		}
		else{
			cout << "NG" << endl;
		}
	}
}