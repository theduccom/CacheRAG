#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define vi vector<int>
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define pi 3.14159265359
#define shosu(X) fixed << setprecision(X)
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int w,h;
int xs,ys,xg,yg;
int data[150][150];
bool searched[150][150];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
bool ans;
bool dfs(int x, int y,int col){
	// cout << x << " " << y << endl;
	searched[x][y] = true;
	if(x == xg && y == yg){
		ans = true;
		return true;
	}
	REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
		if(data[nx][ny] == col && searched[nx][ny] == false) dfs(nx,ny,col);
	}
	return ans;
}
int main(){
	while(1){
		cin >> w >> h;
		if(w == 0 && h == 0) break;
		REP(i,150) REP(j,150) data[i][j] = 0;
		REP(i,150) REP(j,150) searched[i][j] = false;
		cin >> xs >> ys >> xg >> yg;
		xs--; ys--; xg--; yg--;
		swap(xs,ys);
		swap(xg,yg);
		int n;
		cin >> n;
		REP(i,n){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			x--; y--;
			swap(x,y);
			if(d == 0){
				REP(j,4){
					REP(k,2){
						data[x+k][y+j] = c;
					}
				}
			}else{
				REP(j,2){
					REP(k,4){
						data[x+k][y+j] = c;
					} 
				}
			}
		}
		// cout << endl;
		// REP(i,20){
		// 	REP(j,20) cout << data[i][j] << " ";
		// 	cout << endl;
		// }
		ans = false;
		if(dfs(xs,ys,data[xs][ys])) cout << "OK" << endl;
		else cout << "NG" << endl;
	}
}