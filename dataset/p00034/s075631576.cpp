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

char k;
double d[10], v1, v2, t;

int main(){
	while (cin >> d[0]){
		double dis = d[0];
		REP(i, 9){
			cin >> k >> d[i + 1];
			dis += d[i + 1];
		}
		cin >> k >> v1 >> k >> v2;
		t = dis / (v1 + v2);
		dis = 0;
		REP(i, 10){
			dis += d[i];
			if (dis >= t*v1){
				cout << i + 1 << endl;
				break;
			}
		}
	}
}