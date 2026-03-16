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

double x, y;
vector<PD> vpd;
vector<double> vdis;

int main(){
	while (scanf("%lf,%lf", &x, &y) != EOF){
		vpd.push_back(PD(x, y));
	}
	vpd.pop_back();
	double sum = 0;
	REP(i, vpd.size()-1){
		double a = sqrt(pow(x - vpd[i].fi, 2) + pow(y - vpd[i].se, 2)),
			c = sqrt(pow(x - vpd[i + 1].fi, 2) + pow(y - vpd[i + 1].se, 2)),
			b = sqrt(pow(vpd[i].fi - vpd[i + 1].fi, 2) + pow(vpd[i].se - vpd[i + 1].se, 2));
		double z = (a + b + c) / 2;
		sum += sqrt(z*(z - a)*(z - b)*(z - c));
	}
	printf("%.10lf\n", sum);
}