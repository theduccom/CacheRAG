#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <fstream>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MOD 1000000007
#define EPS 1e-10
#define MAX_N 100100
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;
typedef pair<int, string> PSI;

int w, h, sx, sy, gx, gy;
int n, c, d, x, y;

int table[110][110];
int dis[110][110];

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

void solve(){
	REP(i, 110)REP(j, 110)dis[i][j] = INF;
	dis[sy][sx] = 0;

	queue<P> que;
	que.push(P(sy, sx));

	while (que.size()){
		P p = que.front(); que.pop();
		int cx = p.second, cy = p.first;

		if (y == gy&&x == gx)break;

		REP(i, 4){
			int nx = cx + dx[i], ny = cy + dy[i];
			if (nx >= 0 && nx < w&&ny >= 0 && ny < h){
				if (table[ny][nx] == table[cy][cx]
					&&dis[ny][nx] == INF){
					dis[ny][nx] = dis[cy][cx] + 1;
					que.push(P(ny, nx));
				}
			}
		}
	}
}

int main(){
	while (cin >> w >> h&&w + h){
		REP(i, 110)REP(j, 110){
			table[i][j] = 0;
		}
		cin >> sx >> sy >> gx >> gy;
		sx--;
		sy--;
		gx--;
		gy--;

		cin >> n;
		REP(i, n){
			cin >> c >> d >> x >> y;
			x--;
			y--;
			if (d == 0){
				REP(i, 2){
					REP(j, 4){
						table[y + i][x + j] = c;
					}
				}
			}
			else{
				REP(i, 4){
					REP(j, 2){
						table[y + i][x + j] = c;
					}
				}
			}
		}

		solve();

		if (dis[gy][gx] != INF&&table[sy][sx] != 0 && table[gy][gx] != 0)cout << "OK" << endl;
		else cout << "NG" << endl;
	}
}

//REP(i, h){
//	REP(j, w){
//		cout << table[i][j] << " ";
//	}
//	cout << endl;
//}
//cout << "!" << endl;
//solve();
//REP(i, h){
//	REP(j, w){
//		cout << dis[i][j] << " ";
//	}
//	cout << endl;
//}