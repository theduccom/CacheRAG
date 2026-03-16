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

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned long long ULL;

#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const double EPS = 1e-10;
const double PI  = acos(-1.0);

#define CLR(a) memset((a), 0 ,sizeof(a))

#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

int dx[8] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[8] = {0, -1, 0, 1, -1, 1, -1, 1};

int main() {
  string s;

  while(cin >> s) {
    int ans = 0;

    REP(i, s.size()) {
      int tmp, tmp2;
      if(s[i] == 'I') tmp = 1;
      else if(s[i] == 'V') tmp = 5;
      else if(s[i] == 'X') tmp = 10;
      else if(s[i] == 'L') tmp = 50;
      else if(s[i] == 'C') tmp = 100;
      else if(s[i] == 'D') tmp = 500;
      else tmp = 1000;
      
      ans += tmp;
      if(i-1 >= 0) {
	if(s[i-1] == 'I') tmp2 = 1;
	else if(s[i-1] == 'V') tmp2 = 5;
	else if(s[i-1] == 'X') tmp2 = 10;
	else if(s[i-1] == 'L') tmp2 = 50;
	else if(s[i-1] == 'C') tmp2 = 100;
	else if(s[i-1] == 'D') tmp2 = 500;
	else tmp2 = 1000;
	if(tmp > tmp2) ans -= tmp2*2;
      }
    }
    cout << ans << endl; 
  }
}