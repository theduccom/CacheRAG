#include <bits/stdc++.h>
using namespace std;

struct Polygon {
  struct Point {
    double x, y;

    Point() {}
    Point(double x, double y) : x(x), y(y) {}
  };

  vector<Point> P;

  void add_vertex(double a, double b) {
    P.push_back(Point(a, b));
  }

  double dist(Point a, Point b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
  }

  double Hero(Point a, Point b, Point c) {
    double A = dist(a, b);
    double B = dist(b, c);
    double C = dist(c, a);
    double Z = (A + B + C) / 2.0;

    return sqrt(Z * (Z - A) * (Z - B) * (Z - C));
  }

  double area() {
    double S = 0.0;
    for (int i = 1; i < P.size() - 1; ++i) {
      S += Hero(P[0], P[i], P[i + 1]);
    }
    return S;
  }
};

int main() {
  Polygon P;
  double a, b;
  while (~scanf("%lf,%lf", &a, &b)) {
    P.add_vertex(a, b);
  }

  printf("%.10lf\n", P.area());
}