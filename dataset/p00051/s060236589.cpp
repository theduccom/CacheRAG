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

ll n;
string s, MAX, MIN;


ll changei(string s){
	ll k;
	stringstream ss;
	ss << s;
	ss >> k;
	return k;
}

int main(){
	cin >> n;
	REP(i, n){
		ll ma, mi;
		cin >> s;
		sort(ALL(s),greater<int>());
		MAX = s;
		ma = changei(MAX);
		sort(ALL(s));
		MIN = s;
		mi = changei(MIN);
		cout << ma - mi << endl;
	}
}