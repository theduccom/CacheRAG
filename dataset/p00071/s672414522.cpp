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
typedef long long LL;
typedef unsigned long long ULL;

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

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

bool field[8][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bomb(int x, int y) {
  field[x][y] = false;
  REP(i, 4) {
    for(int j = 1; j <= 3; j++) {
      int tx = x+dx[i]*j;
      int ty = y+dy[i]*j;
      if(tx < 0 || ty < 0 || tx > 7 || ty > 7) continue; 
      if(field[tx][ty])bomb(tx, ty);
    }
  }
}

int main() {
  int n, x, y;
  string str;

  cin >> n;
  REP(i, n) {
    getline(cin, str);
    REP(j, 8) {
      cin >> str;
      REP(k, 8) {
	if(str[k] == '0') field[j][k] = false;
	else field[j][k] = true;
      }
    }
    cin >> y >> x;
    bomb(x-1, y-1);

    cout << "Data " << i+1 << ":\n";
    REP(j, 8) {
      REP(k, 8) {
	cout << field[j][k];
      }
      cout << endl;
    }
  }
}