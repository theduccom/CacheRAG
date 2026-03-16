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
template<class T, class S> inline bool minup(T& m, S x){ return m>(T)x ? (m=(T)x, true) : false; }
template<class T, class S> inline bool maxup(T& m, S x){ return m<(T)x ? (m=(T)x, true) : false; }

#define INF 1000000000
#define MOD 1000000007
#define EPS 1E-12

const int MAX_N = 1000;
const int MAX_W = 10000;
int dp[MAX_N+1][MAX_W+1];
int v[MAX_N];
int w[MAX_N];
int W, N;
int c;
int cnt;

int main()
{
  while((cin >> W) && W){
    cin >> N;
    rep(i, N) scanf("%d,%d", &v[i], &w[i]);

    rep(i, N) erep(j, 0, W) dp[i][j] = 0;
    rev(i, N) erep(j, 0, W){
      if(j < w[i]) dp[i][j] = dp[i+1][j];
      else dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
    }

    cout << "Case " << ++cnt << ":" << endl;
    cout << dp[0][W] << endl;
    rev(i, W) if(dp[0][i+1] > dp[0][i]){
      cout << i + 1 << endl;
      break;
    }
  }

  return 0;
}