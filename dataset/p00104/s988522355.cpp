#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <cassert>
using namespace std;
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define EACH(t,i,c) for(t::iterator i=(c).begin(); i!=(c).end(); ++i)
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int main(){
	int w,h;
	while(cin>>h>>w,w&&h){
		vs f(h,string(w,' '));
		REP(i,h){
				cin>>f[i];
		}
		vvi v(h,vi(w));
		int x=0,y=0;
		while(1){
			if(v[y][x]){
				cout<<"LOOP"<<endl;
				goto loop;
			}
			char c=f[y][x];
			v[y][x]=1;
			switch(c){
			case '>':
				x++;
				break;
			case '<':
				x--;
				break;
			case 'v':
				y++;
				break;
			case '^':
				y--;
				break;
			default:
				goto end;
			}
		}
end:
		cout<<x<<" "<<y<<endl;
loop:
		;
	}

}