#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define rrev(i, m, n) for(int (i)=(n)-1; (i)>=(m); (i)--)
#define erev(i, m, n) for(int (i)=(n); (i)>=(m); (i)--)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

const int    INF = 1000000000;
const ll     MOD = 1000000007LL;
const double EPS = 1E-12;

const int MAX_H = 8;
const int MAX_W = 8;
int H = MAX_H;
int W = MAX_W;
int hx, hy;
int cnt;
string maze[MAX_H];

inline bool check(int x, int y){ return 0 <= x && x < H && 0 <= y && y < W; }

void dfs(int x, int y)
{
  if(maze[x][y] == '0') return;
  maze[x][y] = '0';
  erep(dx, -3, 3) erep(dy, -3, 3) if(dx || dy) if(!dx || !dy){
      int nx = x + dx;
      int ny = y + dy;
      if(!check(nx, ny)) continue;
      if(maze[nx][ny] == '1') dfs(nx, ny);
    }
}

int main()
{
  cin >> cnt;

  erep(k, 1, cnt){
    rep(i, H) cin >> maze[i];
    cin >> hy >> hx;
    dfs(hx - 1, hy - 1);
    cout << "Data " << k << ":" << endl;
    rep(i, H) cout << maze[i] << endl;
  }

  return 0;
}