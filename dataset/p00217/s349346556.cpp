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

vector<P> vp;
int n, a, b, c;

int main(){
	while (cin >> n&&n){
		REP(i, n){
			cin >> a >> b >> c;
			vp.push_back(P(b + c, a));
		}
		sort(ALL(vp), greater<P>());
		cout << vp[0].second << " " << vp[0].first << endl;
		vp.clear();
	}
}