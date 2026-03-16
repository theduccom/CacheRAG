#include <algorithm>
#include <vector>
#include <cstdio>
#include <utility>
#include <complex>

using namespace std;

static const double EPS=1e-12;
static const double INF=1e24;
static const double PI=3.141592653589793;

using Point=complex<double>;
using Plane=vector<Point>;

namespace std {
    bool operator<(const Point &a, const Point &b) {
        return real(a)!=real(b)? real(a)<real(b) : imag(a)<imag(b);
    }
}

double cross_prod(const Point &a, const Point &b) {
    return imag(conj(a)*b);
}

double dot_prod(const Point &a, const Point &b) {
    return real(conj(a)*b);
}

struct Line: public pair<Point, Point> {
    Line() {}
    Line(const Point &a, const Point &b) {
        first = a;
        second = b;
    }
};

struct LineSeg: public pair<Point, Point> {
    LineSeg() {}
    LineSeg(const Point &a, const Point &b) {
        first = a;
        second = b;
    }
};

struct Circle {
    Point p;
    double r;
    Circle() {}
    Circle(const Point &p, const double r): p(p), r(r) {}
};

Point get_ipoint(const Line &l, const Line &m) {
    double x1=l.first.real(), x2=l.second.real();
    double x3=m.first.real(), x4=m.second.real();
    double y1=l.first.imag(), y2=l.second.imag();
    double y3=m.first.imag(), y4=m.second.imag();

    double x=(y4-y3)*(x4-x1)-(x4-x3)*(y4-y1);
    double d=(y4-y3)*(x2-x1)-(x4-x3)*(y2-y1);

    return Point(x1, y1) + (x/d)*Point(x2-x1, y2-y1);
}

bool testcase_ends() {
    double x, y;
    if (scanf("%lf %lf", &x, &y) == EOF)
        return 1;

    Point A(x, y);
    scanf("%lf %lf", &x, &y);
    Point B(x, y);
    scanf("%lf %lf", &x, &y);
    Point C(x, y);

    Line l((A+B)/2.0, (A+B)/2.0+(B-A)*polar(1.0, PI/2));
    Line m((B+C)/2.0, (B+C)/2.0+(C-B)*polar(1.0, PI/2));

    Point P=get_ipoint(l, m);
    double r=abs(P-A);
    printf("%.3f %.3f %.3f\n", P.real(), P.imag(), r);

    return 0;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    for (size_t i=0; i<n; ++i)
        if (testcase_ends())
            return 1;

    return 0;
}