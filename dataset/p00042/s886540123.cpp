#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> duo;

#define TT template<typename T>
TT T    sq(T x){ return x*x; }
TT int  ubnd(vector<T>& v,T x){ return upper_bound(v.begin(), v.end(), x) - v.begin(); }
TT int  lbnd(vector<T>& v,T x){ return lower_bound(v.begin(), v.end(), x) - v.begin(); }
TT void sort(T& v){ sort(v.begin(), v.end()); }
TT void revs(T& v){ reverse(v.begin(), v.end()); }
TT void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TT void show(T& v,char d=' ',char e='\n'){for(int i=0;i<v.size();++i)cout<<v[i]<<((i==v.size()-1)?e:d);}
TT void inpt(vector<T>& v,int n){ v.reserve(n);for(int i=0;i<n;++i){T x; cin>>x; v.push_back(x);} }
TT T    In(T& x){ cin >> x; return x; }

static inline void fast_io(){ ios::sync_with_stdio(0); cin.tie(0); }
static inline int in(){ int x; scanf("%d", &x); return x; }
static inline string instr(){ string x; cin >> x; return x; }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

int main()
{
  const int inf = -10e8;
  int case_no = 1;
  int W;
  while (W = in()){
    int dp[1024];
    fill(dp, dp + 1024, inf);
    
    int n = in();
    dp[0] = 0;
    for (int i = 0; i < n; i++){
      int v, w;
      scanf("%d,%d", &v, &w);
      for (int i = W; i >= w; i--){
        dp[i] = max(dp[i], dp[i - w] + v);
      }
    }
    int min_w = W;
    for (int i = W; i >= 0; i--){
      if (dp[min_w] <= dp[i]) min_w = i;
    }
    printf("Case %d:\n", case_no);
    printf("%d\n%d\n", dp[min_w], min_w);
    case_no++;
  }
  return (0);
}