#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>
#include <numeric>
#include <algorithm>
#include <functional>
#include <cctype>
#include <complex>
#include <string>
#include <sstream>
#include <cassert>
using namespace std;

//common
#define BR "\n"

#define ALL(c) (c).begin(),(c).end()
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define EACH(it,o) for(auto it = (o).begin(); it != (o).end(); ++it)
#define IN(l,v,r) ((l)<=(v) && (v)<(r))

typedef vector<int> vi; typedef pair<int,int> pii; typedef vector<pair<int,int> > vpii;
typedef long long ll; typedef vector<long long> vl; typedef pair<long long,long long> pll; typedef vector<pair<long long,long long> > vpll;
typedef vector<string> vs; typedef long double ld;

//debug
#ifdef NDEBUG
#define DUMP(x)
#define DUMPLN(x)
#define DEBUG(x)
#define DEBUGLN(x)
#define LINE()
#define LINELN()
#define CHECK(exp,act)
#define STOP(e)
#else
#define DUMP(x)  cerr << #x << " = " << (x)
#define DUMPLN(x)  DUMP(x) <<endl
#define DEBUG(x) DUMP(x) << LINE() << " " << __FILE__
#define DEBUGLN(x) DEBUG(x)<<endl
#define LINE()    cerr<< " (L" << __LINE__ << ")"
#define LINELN()    LINE()<<endl
#define CHECK(exp,act)  if(exp!=act){DUMPLN(exp);DEBUGLN(act);}
#define STOP(e)  CHECK(e,true);if(!(e)) exit(1);
#endif

template<class T> inline string toString(const vector<T>& x) {
	stringstream ss;
	REP(i,x.size()){
		if(i!=0)ss<<" ";
		ss<< x[i];
	}
	return ss.str();
}
template<class T> inline string toString(const vector<vector<T>>& map) {
	stringstream ss;
	REP(i,map.size()){
		if(i!=0)ss<<BR;
		ss<< toString(map[i]);
	}
	return ss.str();
}
template<class K,class V>  string toString(map<K,V>& x) {
	string res;stringstream ss;
	for(auto& p:x)ss<< p.first<<":" << p.second<<" ";
	return ss.str();
}

template<typename T,typename V> inline T mod(T v,V MOD){
	return (v%MOD+MOD)%MOD;
}

struct UnionFind{
    vector<int> par; // 親
    vector<int> rank; // 木の深さ
    int size;
    UnionFind(int n){
        REP(i,n) par.push_back(i);
        rank = vector<int>(n);
        size=n;
    }
    int root(int x){
        if(par[x] == x)return x;
        return par[x] = root(par[x]);
    }
    bool same(int x,int y){
        return root(x) == root(y);
    }
    void unite(int x,int y){
        x = root(x);y = root(y);
        if(x==y)return;
        if(rank[x] < rank[y])par[x] = y;
        else par[y] = x;
        if(rank[x] == rank[y]) rank[x]++;
        size--;
    }
};

int INF=1<<28;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int w,h;

int enc(int y,int x){
	return y*w+x;
}

int main(){
	while(true){
		cin >> w >> h;
		if(w==0 && h==0)break;
		vector<vector<int>> map(h,vector<int>(w));
		int xs,ys;cin >> xs >> ys;xs--;ys--;
		int xg,yg;cin >> xg >> yg;xg--;yg--;
		int n;cin >> n;
		REP(i,n){
			int c,d,x,y;cin >> c >> d >> x >> y;x--;y--;//d=0 2×4 d=1 4×2 (H*W)
			if(d==0){
				REP(dy,2)REP(dx,4){
					map[y+dy][x+dx]=c;
				}
			}else{
				REP(dy,4)REP(dx,2){
					map[y+dy][x+dx]=c;
				}
			}
		}
		UnionFind uf(h*w);
		REP(y,h)REP(x,w){
			REP(di,4){
				int nx=x+dx[di],ny=y+dy[di];
				if(!IN(0,nx,w) || !IN(0,ny,h) )continue;
				if(map[y][x]==map[ny][nx]){
					uf.unite(enc(y,x),enc(ny,nx));
				}
			}
		}
		if(uf.same(enc(ys,xs),enc(yg,xg))){
			cout <<"OK"<<endl;
		}else{
			cout <<"NG"<<endl;
		}
	}
	return 0;
}