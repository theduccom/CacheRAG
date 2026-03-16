#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define erep(i, m, n) for(int (i)=(m); (i)<=(n); (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000
#define MOD 1000000009
#define EPS 1E-9

const int MAX_H = 10;
const int MAX_W = 10;
int m[MAX_H][MAX_W];
int x, y ,s;
int cnt = MAX_H * MAX_W;
int mx;

inline bool check(int x, int y){ return 0 <= x && x < MAX_H && 0 <= y && y < MAX_W; }

void dfs(int x, int y)
{
  maxup(mx, m[x][y]);
  m[x][y] = 0;
  cnt -= 1;
  erep(dx, -1, 1) erep(dy, -1, 1) if(check(x+dx, y+dy)) if(m[x+dx][y+dy]) dfs(x+dx, y+dy);
}

int main()
{
  while(~scanf("%d,%d,%d", &x, &y, &s)){
    m[x][y] += 1;
    if(s%2){
      int d = s/2 + 1;
      int dx[] = {-d, 0, d, 0};
      int dy[] = {0, -d, 0, d};
      rep(i, 4) if(check(x+dx[i], y+dy[i])) m[x+dx[i]][y+dy[i]] += 1;
    }
    if(s-1){
      erep(i, -1, 1) erep(j, -1, 1) if(i || j) if(check(x+i, y+j)) m[x+i][y+j] += 1;
    }
  }

  rep(i, MAX_H) rep(j, MAX_W) if(m[i][j]) dfs(i, j);

  cout << cnt << endl << mx << endl;

  return 0;
}