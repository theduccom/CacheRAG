#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MAX_N 5001
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;
typedef vector<ll> V;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;


int co = 1;
char k;
int W, N, v[1010], w[1010];

ll dp[1010][1010];//i???????????§???????????§?????????j??\?????¨?????????????????????????????§???

int main(){
	while (cin >> W&&W){
		REP(i, N + 1)REP(j, W + 1)dp[i][j] = 0;
		cin >> N;
		REP(i, N)cin >> v[i] >> k >> w[i];
		REP(i, N){
			REP(j, W + 1){
				if (j >= w[i]){
					dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
				}
				else{
					dp[i + 1][j] = dp[i][j];
				}
			}
		}
		int max = -1, ans = -1;
		REP(i, W + 1){
			if (max < dp[N][i]){
				max = dp[N][i];
				ans = i;
			}
		}
		printf("Case %d:\n", co++);
		cout << max << endl;
		cout << ans << endl;
	}
}