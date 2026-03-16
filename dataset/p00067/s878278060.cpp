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

int field[12][12];

void dfs(int x, int y) {
  if(x < 0 || 11 < x || y < 0 || 11 < y || field[x][y] == 0) return;
  
  field[x][y] = 0;
  REP(i, 4) {
    int tx = x+dx[i], ty = y+dy[i];
    dfs(tx, ty);
  }
}

int main() {
  int n = 12;
  string s;

  while(getline(cin, s)) {
    REP(i, n) field[0][i] = s[i] - '0';
    FOR(i, 1, n) {
      getline(cin, s);
      REP(j, n) {
	field[i][j] = s[j] - '0';
      }
    }
    
    int ans = 0;
    REP(i, n) {
      REP(j, n) {
	if(field[i][j] == 1) {
	  ans++;
	  dfs(i, j);
	}
      }
    }
    cout << ans << endl;

    getline(cin, s);
  }
}