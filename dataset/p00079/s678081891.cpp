
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;
using LL = long long;

template <typename T>
class point
{
private:
	T x_m, y_m;
public:
	point(T x_, T y_)
		:x_m(x_), y_m(y_)
	{}
	point()
		:x_m(0), y_m(0)
	{}

	T x()const
	{
		return x_m;
	}
	T y()const
	{
		return y_m;
	}

	point operator+(const point& other)const
	{
		return point(x_m + other.x(), y_m + other.y());
	}
	point operator-(const point& other)const
	{
		return point(x_m - other.x(), y_m - other.y());
	}
	point operator+()const
	{
		return *this;
	}
	point& operator+=(const point& other)const
	{
		x_m += other.x();
		y_m += other.y();
		return *this;
	}
	point& operator-=(const point& other)const
	{
		x_m -= other.x();
		y_m -= other.y();
		return *this;
	}
	point& operator*=(const T& k)const
	{
		x_m *= k;
		y_m *= k;
		return *this;
	}
	point operator-()const
	{
		return point(-x_m, -y_m);
	}
	T dot(const point& other)const
	{
		return x_m * other.x() + y_m * other.y();
	}
	T cross(const point& other)const
	{
		return x_m * other.y() - y_m * other.x();
	}
	point mult(const T& k)const
	{
		return point(x_m * k, y_m * k);
	}
};

int main(void)
{
	vector<double>x, y;
	double xx, yy;
	while (true)
	{
		char s[114] = {};
		scanf("%s", s);
		if (!strlen(s))break;
		sscanf(s, "%lf,%lf", &xx, &yy);
		x.push_back(xx);
		y.push_back(yy);
	}
	double sx = x.back(), sy = y.back();
	x.pop_back(); y.pop_back();
	vector<point<double>>vec;
	for (int i = 0; i < x.size(); ++i)
	{
		vec.emplace_back(x[i] - sx, y[i] - sy);
	}
	double ans = 0;
	for (int i = 1; i < vec.size(); ++i)
	{
		auto area = vec[i - 1].cross(vec[i]) / 2.;
		ans += abs(area);
	}
	printf("%lf\n", ans);
	return 0;
}