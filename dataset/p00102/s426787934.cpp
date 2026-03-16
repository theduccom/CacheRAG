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

ll n, table[100][100];

int main(){
	while (cin >> n&&n){
		REP(i, n){
			REP(j, n){
				cin >> table[i][j];
			}
		}
		REP(i, n){
			REP(j, n){
				table[i][n] += table[i][j];
			}
		}
		REP(i, n){
			REP(j, n + 1){
				table[n][j] += table[i][j];
			}
		}
		REP(i, n + 1){
			REP(j, n + 1){
				printf("%5d", table[i][j]);
				table[i][j] = 0;
			}
			cout << endl;
		}
	}
}