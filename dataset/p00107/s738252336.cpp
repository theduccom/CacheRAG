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

double d, w, h, n, a, r;

int main(){
	while (cin >> d >> w >> h&&d + w + h){
		if (d > w)swap(d, w);
		if (w > h)swap(w, h);
		cin >> n;
		REP(i, n){
			cin >> r;
			if (r * 2 > sqrt(pow(d, 2) + pow(w, 2)))cout << "OK\n";
			else cout << "NA\n";
		}
	}
}