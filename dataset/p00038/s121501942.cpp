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

void solve(int a1, int a2, int a3, int a4, int a5)
{
  int a[13]; fill_n(a,13,0);
  a[--a1]++;a[--a2]++;a[--a3]++;a[--a4]++;a[--a5]++;
  int m = 0; bool f = false;
  vector<int> s;
  string ans;
  REP(i,13)
  {
    m = max(a[i],m);
    if(a[i]>0)
    {
      s.push_back(a[i]);
      if(i < 10)
      {
        bool flag = true;
        REP(j,5) if(a[(i+j)%13] == 0)
        {
          flag = false;
          break;
        }
        f = f || flag;
      }
    }
  }
  if(m >= 4) ans = "four card";
  else if(s.size()==2) ans = "full house";
  else if(f) ans = "straight";
  else
  {
    int b[3]; fill_n(b,3,0);
    REP(i,s.size()) b[s[i]-1]++;
    if(b[2] > 0) ans = "three card";
    else if(b[1] > 1) ans = "two pair";
    else if(b[1] > 0) ans = "one pair";
    else ans = "null";
  }
  printf("%s\n",ans.c_str());
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int a,b,c,d,e;
  while(~scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e))
    solve(a,b,c,d,e);
  return 0;
}