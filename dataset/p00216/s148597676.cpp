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

int w;

int main(){
	while (cin >> w&&w != -1){
		int sum = 1150;
		if (w > 30){
			sum += (w - 30) * 160;
		}
		if (w > 20){
			sum += min(10, w - 20) * 140;
		}
		if (w > 10){
			sum += min(10, w - 10) * 125;
		}
		cout << 4280 - sum << endl;
	}
}