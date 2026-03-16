#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000 + 0;
//{{{ templates
#define TT_ template<typename T>inline
#define TTF_ template<typename T,typename F>inline
TT_ T sq(T x){return x*x;}
TT_ T In(){T x;cin>>x;return x;}
TT_ void Out(T&x){cout<<x;}
TT_ void sort(T&v){sort(begin(v),end(v));}
TT_ void revs(T&v){reverse(begin(v),end(v));}
TT_ void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT_ int ubnd(T&v,typename T::value_type x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT_ int lbnd(T&v,typename T::value_type x){return lower_bound(begin(v),end(v),x)-begin(v);}
TTF_ void inpt(T&v,int n,F f){for(v.reserve(n);n--;v.emplace_back(f()));}
TTF_ void show(T&v,F f,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),f(x);cout<<e;}
TT_ typename T::iterator minel(T&v){return min_element(begin(v),end(v));}
TT_ typename T::iterator maxel(T&v){return max_element(begin(v),end(v));}

inline void fast_io(){ios_base::sync_with_stdio(0);cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline ll pow_mod(ll a,ll k,ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a,ll p){return pow_mod(a,p-2,p);}
//}}} priority_queue queue deque front stringstream max_element min_element insert count make_tuple

const int MAX_N = 10100100;
int dp[MAX_N];
bool sieve[MAX_N];

int main()
{
  sieve[0] = sieve[1] = true;
  for (int i = 2; i * i <= MAX_N; i++){
    if (sieve[i]) continue;
    for (int j = i * i; j <= MAX_N; j += i){
      sieve[j] = true;
    }
  }

  int n, x, K = 1;
  while (n = in(), x = in(), n){
    int ans = -1;

    dp[0] = K;
    for (int i = 0; i < n; i++){
      int cost = in();
      for (int j = 0; j + cost <= x; j++){
        if (dp[j] == K){
          dp[j + cost] = K;
          if (!sieve[j + cost]) ans = max(ans, j + cost);
        }
      }
    }
    K++;
    if (ans < 0) puts("NA");
    else printf("%d\n", ans);
  }
  return 0;
}