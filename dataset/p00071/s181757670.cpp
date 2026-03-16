#include <bits/stdc++.h>
#define SIZE 300005
#define MOD 1000000007LL
#define INF 1 << 30
#define LLINF 1LL << 60
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define DOWN(i,b,a) for(int i=b;i>=a;i--)
#define SET(a,c) memset(a,c,sizeof a)
#define FORALL(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define FOREACH(i,c) for(auto (i) : (c))
#define BIT(i,j) ((i)>>(j))&1
#define ALL(o) (o).begin(), (o).end()
#define ERASE(o) (o).erase(unique((o).begin(),(o).end()), (o).end())
#define SQ(x) ((x)*(x))
using namespace std;
typedef long long ll;
typedef valarray<int> Array;
typedef pair<ll,ll> Pll;
typedef pair<int, int> Pii;
typedef pair<double, double> Pdd;
template<typename T> inline void priv(vector<T>a){REP(i,a.size()){cout<<a[i]<<((i==a.size()-1)?"\n":" ");}}
ll gcd(ll a,ll b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
ll lcm(ll a,ll b){return a==0||b==0?0:a*b/gcd(a,b);}

int a[8][8];

void f(int x, int y)
{
  a[x][y]=0;
  for(int i=1;i<=3;i++)
  {
    if(x+i>7) break;
    if(a[x+i][y]) f(x+i,y);
  }
  for(int i=1;i<=3;i++)
  {
    if(x-i<0) break;
    if(a[x-i][y]) f(x-i,y);
  }
  for(int i=1;i<=3;i++)
  {
    if(y+i>7) break;
    if(a[x][y+i]) f(x,y+i);
  }
  for(int i=1;i<=3;i++)
  {
    if(y-i<0) break;
    if(a[x][y-i]) f(x,y-i);
  }
}

void solve(int x, int y)
{
  f(x,y);
  REP(i,8)REP(j,8) printf("%d%s",a[i][j],(j==7?"\n":""));
}

int main()
{
  int n; cin >> n;
  string s;
  FOR(c,1,n)
  {
    REP(i,8)
    {
      cin >> s;
      REP(j,8) a[i][j] = s[j]-'0';
    }
    int a,b; cin >> a >> b;
    printf("Data %d:\n",c);
    solve(--b,--a);
  }
  return 0;
}