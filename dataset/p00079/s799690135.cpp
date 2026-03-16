#define _CRT_SECURE_NO_WARNINGS
#include"bits/stdc++.h"
#ifdef _DEBUG
#define DBG(n) n
#else
#define DBG(n)
#endif
#define INF         1e9
#define INFLL       1e18
#define EPS         1e-9
#define REP(i,n)    for(ll i=0,i##_len=(n);i<i##_len;++i)
#define REP1(i,n)   for(ll i=1,i##_len=(n);i<=i##_len;++i)
#define REPR(i,n)   for(ll i=(n)-1;i>=0;--i)
#define REPR1(i,n)  for(ll i=(n);i>0;--i)
#define REPC(i,obj) for(auto i:obj)
#define ALL(obj)    (obj).begin(),(obj).end()
#define SETP(n)     cout << fixed << setprecision(n)
using namespace std;
using ll = long long;
template<typename T = ll>inline T in() { T ret; cin >> ret; return ret; }

inline double norm(const pair<double, double>&p1, const pair<double, double>&p2) {
	return hypot(p1.first - p2.first, p1.second - p2.second);
}
double heron(const pair<double, double>&p1, const pair<double, double>&p2, const pair<double, double>&p3) {
	double a = norm(p1, p2), b = norm(p2, p3), c = norm(p3, p1);
	double z = (a + b + c) / 2;
	return sqrt(z * (z - a) * (z - b) * (z - c));
}
signed main()
{
	vector<pair<double, double>>cood;
	double x, y;
	while (scanf("%lf,%lf", &x, &y) != EOF) {
		cood.push_back(make_pair(x, y));
	}
	double area = 0;
	REP1(i, cood.size() - 2) {
		area += heron(cood[0], cood[i], cood[i + 1]);
	}
	SETP(20);
	cout << area << endl;
}
