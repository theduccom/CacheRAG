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

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  int c[5];

  while(scanf("%d,%d,%d,%d,%d", &c[0], &c[1], &c[2], &c[3], &c[4]) != EOF) {
    int n[13] = {};
    REP(i, 5) n[c[i]-1]++;

    int first = 0, second = 0, straight = 0;
    REP(i, 13) {
      if(n[i] > 0 && n[(i+1)%13] > 0) 
	straight++;
      if(first < n[i]) {
	second = first;
	first = n[i];
      } else if(second < n[i]) {
	second = n[i];
      }
    }

    if(first == 4) cout << "four card" << endl;
    else if(first == 3) {
      if(second == 2) cout << "full house" << endl;
      else cout << "three card" << endl;
    }
    else if(straight == 4 ) {
      if(n[12] > 0 && n[0] > 0 && n[1] > 0) cout << "null" << endl;
      else cout << "straight" << endl;
    }
    else if(first == 2 && second == 2) cout << "two pair" << endl;
    else if(first == 2) cout << "one pair" << endl;
    else cout << "null" << endl;
  }
}