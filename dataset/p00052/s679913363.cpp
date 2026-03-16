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

ll n, f, t;

int main(){
	while (cin >> n&&n){
		f = 0; t = 0;
		for (int i = 1; i <= n; i++){
			ll k = i;
			while (k % 5 == 0){
				f++;
				k /= 5;
			}
			while (k % 2 == 0){
				t++;
				k /= 2;
			}
		}
		cout << min(t, f) << endl;
	}
}