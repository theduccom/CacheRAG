//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
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
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))




int main(){
	vector <string>res;
	while(1){
		int H,W;
		cin>>H>>W;
		if(H==0&&W==0)break;
		char c[102][102];
		REP(i,H)REP(j,W)cin>>c[i][j];
		int tx=0,ty=0;
		int x=0,y=0;
		vector<PII>pi;
		set<PII>sp;
		int cnt=0;
		bool ch=true;
		while(c[y][x]!='.'){
			sp.insert(MP(x,y));
			if(c[y][x]=='>'){
				tx=1;ty=0;
			}else if(c[y][x]=='v'){
				tx=0;ty=1;
			}else if(c[y][x]=='<'){
				tx=-1;ty=0;
			}else if(c[y][x]=='^'){
				tx=0;ty=-1;
			}
			x+=tx;y+=ty;
			if(sp.find(MP(x,y))!=sp.end()){
				ch=false;
				break;
			}
		}
		if(ch){
			res.PB(toString(x)+' '+toString(y));
		}else{
			res.PB("LOOP");
		}
	}
	REP(i,SZ(res))cout<<res[i]<<endl;
}