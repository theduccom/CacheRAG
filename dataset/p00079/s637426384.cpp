#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#include <cstdio>

using namespace std;

double EPS = 1e-10;

double add(double a, double b) {
	if (abs(a+b) < EPS * (abs(a) + abs(b))) {
		return 0;
	}
	return a+b;
}

struct P {
	double x, y;
	P() {}
	P(double x, double y) : x(x), y(y) {
	}
	P operator + (P p) {
		return P(add(x, p.x), add(y, p.y));
	}
	P operator - (P p) {
		return P(add(x, -p.x), add(y, -p.y));
	}
	P operator * (double d) {
		return P(x*d, y*d);
	}
	double dot(P p) {
		return add(x*p.x, y*p.y);
	}
	double det(P p) {
		return add(x*p.y, -y*p.x);
	}
};

bool cmp_x(const P& p, const P& q) {
	if (p.x != q.x) {
		return p.x < p.y;
	}
	return p.y < q.y;
}

vector<P> convex_hell(P* ps, int n) {
	sort(ps, ps+n, cmp_x);
	int k = 0;
	vector<P> qs(n*2);
	for (int i = 0; i < n; i++) {
		while (k > 1 && (qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1]) <= 0) {
			k--;
		}
		qs[k++] = ps[i];
	}

	for (int i = n-2, t = k; i >= 0; i--) {
		while (k > t && (qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1]) <= 0) {
			k--;
		}
		qs[k++] = ps[i];
	}
	qs.resize(k-1);
	return qs;
}

double dist(P p, P q) {
	return (p-q).dot(p-q);
}

P ps[25];

int main() {
	char w;
	int i = 0;
	while (cin >> ps[i].x >> w >> ps[i].y) {
		i++;
	}
	vector<P> qs = convex_hell(ps, i);
	double a, b, c, z;
	double sum = 0.0;
	for (int j = 1; j < i-1; j++) {
		a = sqrt(dist(qs[0], qs[j]));
		b = sqrt(dist(qs[0], qs[j+1]));
		c = sqrt(dist(qs[j], qs[j+1]));
		z = (a+b+c)/2.0;
		sum += sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%.6f\n", sum);
	return 0;
}