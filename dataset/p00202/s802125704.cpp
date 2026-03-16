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
#define MAX_M 100100

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n, x;
int a[100];

bool is_prime[1001000];

bool dp[1001000];

int main(){
	REP(i, 1001000)is_prime[i] = 1;
	is_prime[0] = 0;
	for (int i = 2; i <= 1000000; i++){
		if (is_prime[i]){
			for (int j = 2 * i; j <= 1000000; j += i){
				is_prime[j] = 0;
			}
		}
	}
	while (cin >> n >> x&&n + x){
		REP(i, 1001000)dp[i] = 0;
		REP(i, n)cin >> a[i];
		dp[0] = 1;
		sort(a, a + n);
		REP(i, n){
			REP(j, x){
				if (dp[j] == 1 && j + a[i] <= x)	dp[j + a[i]] = 1;
			}
		}
		bool f = 1;
		for (int i = x; i > 0; i--){
			if (dp[i] && is_prime[i]){
				cout << i << endl;
				f = 0;
				break;
			}
		}
		if (f)cout << "NA" << endl;
	}
}