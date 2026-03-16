#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef long long ll;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };


int main(){
	ios::sync_with_stdio(false);

	int n;
	vd x(3), y(3);
	double a1, a2, b1, b2, c1, c2;
	double px, py, r;

	cin >> n;

	for (; n > 0; n--){
		cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

		a1 = 2 * (x[1] - x[0]);
		b1 = 2 * (y[1] - y[0]);
		c1 = x[0] * x[0] - x[1] * x[1] + y[0] * y[0] - y[1] * y[1];

		a2 = 2 * (x[2] - x[0]);
		b2 = 2 * (y[2] - y[0]);
		c2 = x[0] * x[0] - x[2] * x[2] + y[0] * y[0] - y[2] * y[2];

		px = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
		py = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);
		r = sqrt((px - x[0])*(px - x[0]) + (py - y[0])*(py - y[0]));

		printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}

}