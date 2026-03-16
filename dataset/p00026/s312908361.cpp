#include <bits/stdc++.h>
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

int field[15][15];
int dx[12] = {-1, 0, 1, 0, -1, -1, 1, 1, -2, 0, 2, 0};
int dy[12] = {0, -1, 0, 1, -1, 1, -1, 1, 0, -2, 0, 2};

void wfs(int y, int x, int size) {
  int n;
  if(size == 1) n = 4;
  else if(size == 2) n = 8;
  else n = 12;

  field[y][x]++;
  REP(i, n) {
    int nx = x+dx[i], ny = y+dy[i];
    if(nx < 0 || 9 < nx || ny < 0 || 9 < ny) continue;
    field[ny][nx]++;
  }
}

int main() {
  int x, y, size;
  char c1, c2;
  
 memset(field, 0, sizeof(field));
  while(cin >> x >> c1 >> y >> c2 >> size) {
    wfs(x, y, size);
  }  
    
  int max = 0;
  int cnt = 0;
  REP(i, 10) {
    REP(j, 10) {
      if(field[i][j] > max) max = field[i][j];
      if(field[i][j] == 0) cnt++;
    } 
  }  
  cout << cnt << endl;
  cout << max << endl;
}