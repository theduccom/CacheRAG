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
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;


int dpt[111][111];
int dpc[111][111];
int n, m, a, b, cost, t, k, p, q, r;

int main(){
	while (cin >> n >> m&&n + m){
		REP(i, 111){
			REP(j, 111){
				dpt[i][j] = INF;
				dpc[i][j] = INF;
			}
		}
		REP(i, n){
			cin >> a >> b >> cost >> t;
			dpt[a][b] = min(dpt[a][b], t);
			dpt[b][a] = min(dpt[a][b], t);
			dpc[a][b] = min(dpc[a][b], cost);
			dpc[b][a] = min(dpc[a][b], cost);
		}
		FOR(l, 1, m + 1){
			FOR(i, 1, m + 1){
				FOR(j, 1, m + 1){
					dpt[i][j] = min(dpt[i][j], dpt[i][l] + dpt[l][j]);
					dpc[i][j] = min(dpc[i][j], dpc[i][l] + dpc[l][j]);
				}
			}
		}
		cin >> k;
		REP(i, k){
			cin >> p >> q >> r;
			if (r == 0)cout << dpc[p][q] << endl;
			else cout << dpt[p][q] << endl;
		}
	}
}