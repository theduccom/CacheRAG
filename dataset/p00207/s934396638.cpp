#define _USE_MATH_DEFINES
#include <iostream>
#include <complex>
#include <algorithm>
#include <vector>
#include <stack>
#include <string>
#include <queue>
#include <cmath>
#include <math.h>
#include <numeric>
#include <list>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <climits>
#include <set>
#include <memory.h>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
#include <map>
#include <cassert>
#include <time.h>
#include <ctime>

using namespace std;

typedef complex<double> xy_t;
typedef pair<xy_t, xy_t> line;
typedef long long ll;
typedef pair<int, int> P;
typedef pair<int , P> PP;
typedef pair<int, string> Ps;
typedef vector<int> vec;
typedef vector<vec> mat;
const int INF = 1 << 27;
const double EPS = 1e-10;
const double PI = 3.1415926535897932384626433832795;
const int CLK = CLOCKS_PER_SEC;

#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, m, n) for(int i = m; i < n; i++)
#define repD(i, n) for(int i = n; i >= 0; i--)

int block[102][102];
bool visit[102][102];


int main(){
	int n, w, h, xs, ys, xg, yg;
	int c, d, x, y;
	while(cin >> w >> h && (w || h)){
		cin >> xs >> ys;
		cin >> xg >> yg;
		fill(&block[0][0], &block[101][101] + 1, -1);
		memset(visit, false, sizeof(visit));
		cin >>n;
		rep(i, n){
			cin >> c >> d >> x >> y;
			if(d){
				rep(j, 4) rep(k, 2) block[x+k][y+j] = c;
			}else{
				rep(j, 4) rep(k, 2) block[x+j][y+k] = c;
			}
		}

		queue<P> que;
		que.push(P(xs, ys));
		visit[xs][ys] = true;
		int dx[] = {1, 0, -1, 0};
		int dy[] = {0, -1, 0, 1};
		
		while(!que.empty()){
			P p = que.front();
			que.pop();
			x = p.first;
			y = p.second;
			rep(i, 4){
				int x2 = x + dx[i];
				int y2 = y + dy[i];
				if(!visit[x2][y2] && block[x2][y2] == block[x][y]){
					visit[x2][y2] = true;
					que.push(P(x2, y2));
				}
			}
		}

		if(visit[xg][yg]) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
	return 0;
}