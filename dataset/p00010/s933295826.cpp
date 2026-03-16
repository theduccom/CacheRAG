#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <cstdint>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
#include <functional>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

#define int long

#define REP(i,f,n) for(int i=(f); i < (n); ++i)
#define PER(i,f,n) for(int i=(n-1); i >= f; --i)

constexpr int dx[4] = { 1, 0, -1, 0 };
constexpr int dy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

template<typename STL> inline void print_STL(STL c, string ab = ""){
	cout << ab << c[0];
	for(int i = 1; i < c.size(); ++i) cout << ' ' << c[i]; }

template<typename STL> inline void import_STL(STL& c, int n){
	typename STL::value_type tmp;
	for(int i = 0; i < n; ++i){	cin >> tmp; c.push_back(tmp);} }

istream& operator>>(istream& os, pair<double,double>& x)
{
	double tmp;
	os >> tmp;
	x.first = tmp;
	os >> tmp;
	x.second = tmp;
	return os;
}

ostream& operator<<(ostream& os, pair<double,double>& x)
{
	return os << x.first << ' ' << x.second;
}

pair<double, double> operator-(pair<double,double> a, pair<double,double> b)
{
	return {a.first - b.first, a.second - b.second};
}
pair<double, double> operator+(pair<double,double> a, pair<double,double> b)
{
	return {a.first + b.first, a.second + b.second};
}

double operator*(pair<double, double> a, pair<double,double> b)
{
	return a.first * b.first + a.second * b.second;
}
double sq(double a)
{
	return a * a;
}

double round4(double x)
{
	x *= 1000;
	if(x > 0)
		x = (int)(x + 0.50);
	else
		x = (int)(x - 0.50);
	return x / 1000.;
}

signed main()
{
	pair<double,double> a, b, c;
	int n;
	cin >>n;
	for(int i = 0; i < n; ++i)
	{
		cin >> a >> b >> c;
		pair<double, double> va = b-c, vb = c-a;
		/* cout << va <<' ' << vb << '\n'; */
		/* auto m = b + c, n = c + a; */
		/* m = {m.first / 2, m.second/2}; */
		/* n = {n.first / 2, n.second/2}; */
		double norm = va.first * vb.second - va.second * vb.first;
		/* double cx = va * m , cy = vb * n ; */
		double cx = sq(b.first) + sq(b.second) - sq(c.first) - sq(c.second);
		double cy = sq(c.first) + sq(c.second) - sq(a.first) - sq(a.second);
		double sx = cx * vb.second - cy * va.second;
		double sy = va.first * cy - cx * vb.first;
		sx /= norm * 2;
		sy /= norm * 2;

		double r = sqrt(sq(c.first - sx)+ sq(c.second - sy));
		sx = round4(sx);
		sy = round4(sy);
		r = round4(r);
		printf("%.3lf %.3lf %.3lf\n", sx, sy, r);
	}
}