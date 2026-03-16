#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <ctime>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <numeric>
#include <cassert>
using namespace std;
static const double EPS = 1e-10;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define rev(i,n) for(int i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SS stringstream
#define DBG1(a) rep(_X,sz(a)){printf("%d ",a[_X]);}puts("");
#define DBG2(a) rep(_X,sz(a)){rep(_Y,sz(a[_X]))printf("%d ",a[_X][_Y]);puts("");}
#define bitcount(b) __builtin_popcount(b)
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)

#define delete(a,n) a.erase(remove(all(a),n),a.end())
template<typename T, typename S> vector<T>& operator<<(vector<T>& a, S b) { a.push_back(b); return a; }
template<typename T> void operator>>(vector<T>& a, int b) {while(b--)if(!a.empty())a.pop_back();}
bool isprime(int n){ if(n<2)return false;  for(int i=2;i*i<=n;i++)if(n%i==0)return false;  return true;} 
ll b_pow(ll x,ll n){return n ? b_pow(x*x,n/2)*(n%2?x:1) : 1ll;}
string itos(int n){stringstream ss;ss << n;return ss.str();}

int W,H;

int field[110][110];
int done[110][110];
int dfs(int x,int y,int gx,int gy,int col){
	if(x < 0 || y < 0 || field[y][x] == 0 || field[y][x] != col) return 0;
	if( x == gx && y == gy ){
		return 1;
	}
	if(done[y][x]) return false;
	else done[y][x] = true;
	if( dfs(x+1,y,gx,gy,col) ) return true;
	if( dfs(x-1,y,gx,gy,col) ) return true;
	if( dfs(x,y+1,gx,gy,col) ) return true;
	if( dfs(x,y-1,gx,gy,col) ) return true;
	
	
}
int main(){
	ios_base::sync_with_stdio(false);
	while(cin >> W >> H && W){
		for(int i = 0 ; i < 110 ; i++)
			for(int j = 0 ; j < 110 ; j++) 
				field[i][j] = done[i][j] = 0;
		int sx,sy,gx,gy,n;
		cin >> sx >> sy >> gx >> gy >> n;
		//sx--,sy--;
		//gx--,gy--;
		for(int i = 0 ; i < n ; i++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			//x--,y--;
			if( d == 0 ){
				for(int i = 0 ; i < 3 ; i++)
					for(int j = 0 ; j < 4 ; j++)
						field[y+i][x+j] = c;
			}else{
				for(int i = 0 ; i < 4 ; i++)
					for(int j = 0 ; j < 3 ; j++)
						field[y+i][x+j] = c;
			}
		}
		/*for(int i = 0 ; i < H ; i++){
			for(int j = 0 ; j < W ; j++) cout << field[i][j];
			cout << endl;
		}*/
		cout << (dfs(sx,sy,gx,gy,field[sy][sx])?"OK":"NG") << endl;
	}
	
}