#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pair<int, int> > vii;
#define rrep(i, m, n) for(int (i)=(m); (i)<(n);  (i)++)
#define  rep(i, n)    for(int (i)=0; (i)<(n);  (i)++)
#define  rev(i, n)    for(int (i)=(n)-1; (i)>=0; (i)--)
#define vrep(i, c)    for(__typeof((c).begin())i=(c).begin(); i!=(c).end(); i++)
#define  ALL(v)       (v).begin(), (v).end()
#define mp            make_pair
#define pb            push_back
template<class T1, class T2> inline void minup(T1& m, T2 x){ if(m>x) m=static_cast<T2>(x); }
template<class T1, class T2> inline void maxup(T1& m, T2 x){ if(m<x) m=static_cast<T2>(x); }

#define INF 1000000000LL
#define MOD 1000000009
#define EPS 1E-9

const int MAX_V = 1000;
ll dp[2][MAX_V][MAX_V];
int E, V;
int a, b;
ll c, t;
int k;
int p, q, r;

int main()
{
  //  while((cin >> E >> V) && E && V){
  while(scanf(" %d %d", &E, &V) && E && V){
    rep(i, 101) rep(j, 101) dp[0][i][j] = dp[1][i][j] = INF;

    rep(i, E){
      //      cin >> a >> b >> c >> t;
      scanf(" %d %d %d %d", &a, &b, &c, &t);
      a-=1;  b-=1;
      dp[0][a][b] = dp[0][b][a] = c;
      dp[1][a][b] = dp[1][b][a] = t;
    }

    rep(b, 2) rep(k, V) rep(i, V) rep(j, V) minup(dp[b][i][j], dp[b][i][k] + dp[b][k][j]);

    //    cin >> k;
    scanf(" %d", &k);
    while(k--){
      //      cin >> p >> q >> r;
      scanf(" %d %d %d", &p, &q, &r);
      //      cout << dp[r][p-1][q-1] << endl;
      printf("%lld\n", dp[r][p-1][q-1]);
    }
  }

  return 0;
}