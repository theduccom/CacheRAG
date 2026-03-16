#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
 
using namespace std;
 
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define rep(i,n) REP(i, 0, n)
#define pb push_back
#define mp make_pair
#define all(r) (r).begin(),(r).end()
#define rall(r) (r).rbegin(),(r).rend()
#define fi first
#define se second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 

 
const int INF = 1000000;
const double EPS = 1e-8;
const int mod = 1e9 + 7;

int dx[] ={-1,0,1,0};
int dy[] ={0,-1,0,1};

int w, h, sx, sy, gx, gy, n;
int c, d, x, y, nx, ny;

int dat[110][110];
bool used[110][110];

bool outOfRange(int x, int y){
	if(x > w || x < 1 || y > h || y < 1) return true;
	return false;
}


int main(){
	while(cin>>w>>h && w && h){
		cin>>sx>>sy>>gx>>gy>>n;
		rep(i, 110) rep(j, 110) dat[i][j] = 0, used[i][j] = false;
		rep(i, n){
			cin>>c>>d>>x>>y;
			if(d == 0){
				for(int j = 0; j < 4; j++){
					for(int k = 0; k < 2; k++){
						dat[x+j][y+k] = c;
					}
				}
			}
			else{
				for(int j = 0; j < 4; j++){
					for(int k = 0; k < 2; k++){
						dat[x+k][y+j] = c;
					}
				}
			}
		}

		queue<pair<int, pii> > q;
		pair<int, pii> p;
		q.push(mp(0, mp(sx, sy)));
		used[sx][sy] = true;
		bool ans = false;

		while(!q.empty()){
			p = q.front(); q.pop();
			c = p.fi;
			x = p.se.fi;
			y = p.se.se;
			if(x == gx && y == gy){
				ans = true;
				break;
			}
			for(int i = 0; i < 4; i++){
				nx = x + dx[i];
				ny = y + dy[i];
				if(outOfRange(nx, ny) || used[nx][ny] == true) continue;
				if(dat[x][y]==dat[nx][ny]){
					q.push(mp(c+1, mp(nx, ny)));
					used[nx][ny] = true;
				}
			}
		}
		cout<<(ans?"OK":"NG")<<endl;
	}
}