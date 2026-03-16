#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
using namespace std;
#pragma warning(disable:4996)
struct Point { long double px, py; };
struct Segment { Point p1, p2; };
Point X[200000];
Point Minus(Point a, Point b) { Point G; G.px = a.px - b.px; G.py = a.py - b.py; return G; }
long double Abs(Point a) { return sqrt(a.px*a.px + a.py*a.py); }
long double dot(const Point& a, const Point& b) { return a.px * b.px + a.py * b.py; }
long double crs(const Point& a, const Point& b) { return a.px * b.py - a.py * b.px; }
long double dst(const Segment& a, const Point& b) {
	return abs(crs(Minus(a.p2, a.p1), Minus(b, a.p1)) / Abs(Minus(a.p2, a.p1)));
}
int main() {
	int N = 0;
	while (scanf("%Lf,%Lf", &X[N].px, &X[N].py) != EOF) {
		N++;
	}
	long double SUM = 0.0l;
	for (int i = 1; i < N - 1; i++) {
		Segment A; A.p1 = X[i]; A.p2 = X[i + 1];
		long double DST = dst(A, X[0]);
		Point H; H.px = X[i].px - X[i + 1].px;
		H.py = X[i].py - X[i + 1].py;
		long double LEN = Abs(H);
		SUM += DST*LEN / 2;
	}
	cout << fixed << setprecision(1919) << SUM << endl;
	return 0;
}