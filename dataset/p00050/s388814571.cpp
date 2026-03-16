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

const double EPS = 1e-9;
const double INF = 1e9;




int main(){
	string str;
	string ap="apple",pe="peach";
	vector<string>res;
	while(cin>>str){
		
		int pos=0;
		bool flag=false;
		while(str.find(ap,pos)!=string::npos){
			pos=str.find(ap,pos);
			REP(i,5)str[pos+i]=pe[i];
			pos++;
			flag=true;
		}
		pos=0;
		if(!flag)while(str.find(pe,pos)!=string::npos){
			pos=str.find(pe,pos);
			REP(i,5)str[pos+i]=ap[i];
			pos++;
		}
		res.PB(str);
	}
	REP(i,SZ(res)){
		cout<<res[i];
		if(i!=SZ(res)-1)cout<<" ";
	}
	cout<<endl;
	return 0;
}
/*

*/