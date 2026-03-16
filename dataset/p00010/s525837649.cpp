#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>
#include <numeric>
#include <iomanip>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10
#define MAX_N 20000
#define MAX_M 16

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int n;
double dx1, dx2, dx3, dy1, dy2, dy3;

int main(){
	cin >> n;
	REP(i, n){
		cin >> dx1 >> dy1 >> dx2 >> dy2 >> dx3 >> dy3;
		double a = 2 * (dx1 - dx2), b = 2 * (dy1 - dy2), c = (dx1*dx1 + dy1*dy1) - (dx2*dx2 + dy2*dy2);
		double d = 2 * (dx2 - dx3), e = 2 * (dy2 - dy3), f = (dx2*dx2 + dy2*dy2) - (dx3*dx3 + dy3*dy3);
		double x, y;
		//if (a < 0){
		//	a = -a;
		//	b = -b;
		//	c = -c;
		//}
		//if (d < 0){
		//	d = -d;
		//	e = -e;
		//	f = -f;
		//}
		//if (a == 0){
		//	y = c / b;
		//	x = (f - e*y) / d;
		//}
		//else if (b == 0){
		//	x = c / a;
		//	if (d == 0) y = f / e;
		//	else y = (f - e*x) / d;
		//}
		//else if (a != 0 && b != 0){
			x = (b*f - c*e) / (b*d - a*e);
			y = (c*d - a*f) / (b*d - a*e);
		//}
		cout << fixed << setprecision(3) << x << " " << y << " " << sqrt((dx1 - x)*(dx1 - x) + (dy1 - y)*(dy1 - y)) << endl;
	}
}