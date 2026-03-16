#include <bits/stdc++.h>

#define SIZE 300005
#define MOD 1000000007LL
#define INF INT_MAX / 3
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
template<typename T> inline void priv(vector<T>a){REP(i,a.size()){cout<<a[i];if(i==a.size()-1)cout<<endl;else cout<<" ";}}
int gcd(int a,int b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
int lcm(int a,int b){return a==0||b==0?0:a*b/gcd(a,b);}

int a[100];

void solve()
{
  int b;
  REP(i,64) if(a[i])
  {
    b = i;
    break;
  }
  if(a[b+1])
  {
    if(a[b+2]) printf("C\n");
    else if(a[b+8])
    {
      if(a[b+9]) printf("A\n");
      else printf("G\n");
    }
    else printf("E\n");
  }
  else if(a[b+16]) printf("B\n");
  else if(a[b+9]) printf("F\n");
  else printf("D\n");
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int i = 0; string s;
  fill_n(a,100,0);
  while(cin >> s)
  {
    REP(j,8) a[i*8+j] = (s[j]-'0');
    (++i) %= 8;
    if(i == 0) solve();
  }
  return 0;
}