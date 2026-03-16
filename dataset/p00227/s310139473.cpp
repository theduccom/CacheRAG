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

ll n, m;

int main(){
	while (cin >> n >> m&&n + m){
		ll p[10000];
		fill(p, p + 10000, -1);
		REP(i, n)cin >> p[i];
		sort(p, p + 10000, greater<int>());
		ll sum = 0;
		REP(i, n){
			if ((i+1)%m != 0)sum += p[i];
		}
		cout << sum << endl;
	}
}