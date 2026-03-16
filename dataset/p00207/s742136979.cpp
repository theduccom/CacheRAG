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

int t[200][200];
int gxx,gyy;
int dfs(int x,int y,int c){
	if( t[y][x] != c ) return false;
	if( y == gyy && x == gxx) {
		return true;
	}
	t[y][x] = 0;
	if( dfs(x+1,y,c) ) return true;
	if( dfs(x-1,y,c) ) return true;
	if( dfs(x+0,y-1,c) ) return true;
	if( dfs(x+0,y+1,c) ) return true;
	
	return false;

}
int main(){
	int w,h;
	while(cin >> w >> h && w ){
		memset(t,0,sizeof(t));
		int xs,ys,xg,yg;
		cin >> xs >> ys >> xg >> yg;
		gxx = xg;
		gyy = yg;
		int n;
		cin >> n;
		for(int _ = 0 ; _ < n ; _++){
			int c,d,x,y;
			cin >> c >> d >> x >> y;
			if(!d){
				rep(i,2)rep(j,4) t[y+i][x+j] = c;
			}else{
				rep(i,4)rep(j,2) t[y+i][x+j] = c;
			}
		}
		if( t[ys][xs] == 0 ){
			cout << "NG" << endl;
		}else{
			cout << (dfs(xs,ys,t[ys][xs])?"OK":"NG") << endl;
		}
		
	}
}