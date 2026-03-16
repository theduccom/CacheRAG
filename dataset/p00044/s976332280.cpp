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
int gcd(int a,int b){int c=max(a,b);int d=min(a,b);return c==0||d==0?c:gcd(c%d,d);}
int lcm(int a,int b){return a==0||b==0?0:a*b/gcd(a,b);}

bool prime(int n)
{
  if(n<=1) return false;
  if(n==2) return true;
  if(n%2==0) return false;
  for(int i=3; i<=sqrt(n); i+=2)
    if(n%i==0) return false;
  return true;
}

void solve()
{
  vector<int> a;
  FOR(i,2,50100) if(prime(i)) a.push_back(i);
  int n;
  while(~scanf("%d",&n))
  {
    int l = *(lower_bound(a.begin(),a.end(),n)-1);
    int r = *(upper_bound(a.begin(),a.end(),n));
    printf("%d %d\n",l,r);
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
  return 0;
}