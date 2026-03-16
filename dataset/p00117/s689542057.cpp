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

int n, m;
int s, t, c, d;
int dp[500][500];

int main()
{
  cin >> n >> m;

  rep(i, n) rep(j, n) dp[i][j] = INF;
  rep(i, n) dp[i][i] = 0;
  rep(i, m){
    scanf("%d,%d,%d,%d", &s, &t, &c, &d);
    dp[s - 1][t - 1] = c;
    dp[t - 1][s - 1] = d;
  }

  scanf("%d,%d,%d,%d", &s, &t, &c, &d);
  rep(k, n) rep(i, n) rep(j, n) minup(dp[i][j], dp[i][k] + dp[k][j]);

  cout << c - d - dp[s - 1][t - 1] - dp[t - 1][s - 1] << endl;

  return 0;
}