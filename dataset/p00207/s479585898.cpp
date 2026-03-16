#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;


int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main(){
	int w, h;
	while(cin >> w >> h, w|h){
		w+=2, h+=2;
		vector<vi> v(h, vi(w, 0));
		int xs, ys, xg, yg;
		cin >> xs >> ys >> xg >> yg;
		int n;
		cin >> n;
		while(n--){
			int c, d, x, y;
			cin >> c >> d >> x >> y;
			int bw = d?2:4;
			int bh = d?4:2;
			rep(i, bh) rep(j, bw) v[y+i][x+j] = c;
		}

		queue<P> q;
		q.push(MP(xs, ys));
		int c = v[ys][xs];
		bool ok = false;
		if(c) while(!q.empty()){
			P p = q.front();
			q.pop();

			if(v[p.Y][p.X] != c) continue;
			v[p.Y][p.X] = 0;

			if(p == MP(xg, yg)){
				ok = true;
				break;
			}

			rep(i, 4){
				int x = p.X + dx[i];
				int y = p.Y + dy[i];
				q.push(MP(x, y));
			}
		}
		cout << (ok?"OK":"NG") << endl;
	}

	return 0;
}