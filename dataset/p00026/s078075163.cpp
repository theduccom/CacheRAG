//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <fstream>
#include <complex>
#include <math.h>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long, long> PLL;
typedef long long LL;
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

const long double EPS = 1e-12;
const LL INF = 1e18;

int mp[12][12];

int main(){
	int x,y,sz;
	CLR(mp);
	char c1,c2;
	while(cin>>x>>c1>>y>>c2>>sz){
		if(sz==0)break;
		x++;y++;
		if(sz==1){
			for(int dx=-1;dx<=1;dx++)for(int dy=-1;dy<=1;dy++){
				if(abs(dx)+abs(dy)<=1)mp[x+dx][y+dy]++;
			}
		}else if(sz==2){
			for(int dx=-1;dx<=1;dx++)for(int dy=-1;dy<=1;dy++){
				if(abs(dx)+abs(dy)<=1||(abs(dx)==1&&abs(dy)==1))mp[x+dx][y+dy]++;
			}
		}else{
			for(int dx=-2;dx<=2;dx++)for(int dy=-2;dy<=2;dy++){
				if(abs(dx)+abs(dy)<=2)mp[x+dx][y+dy]++;
			}
		}
	}
	int cnt=0;
	int ma=0;
	REP(i,10)REP(j,10){
		if(mp[i+1][j+1]==0)cnt++;
		ma=max(ma,mp[i+1][j+1]);
	}
	cout<<cnt<<endl;
	cout<<ma<<endl;
	return 0;
}
/*
2,5,3
3,6,1
3,4,2
4,5,2
3,6,3
2,4,1
0,0,0
*/