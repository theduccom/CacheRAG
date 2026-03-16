#include <cstdio>
#include <algorithm>
#include <vector>
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

struct Circle {
    Point p;
    double r;
    Circle() {}
    Circle(const Point &p, const double r): p(p), r(r) {}
};

size_t num_ctangent(const Circle &c1, const Circle &c2) {
    double d=abs(c1.p-c2.p);
    double r=min(c1.r, c2.r), R=max(c1.r, c2.r);
    if (R+r < d) {
        return 4;
    } else if (abs(R+r-d) < EPS) {
        return 3;
    } else if (abs(R-r-d) < EPS) {
        return 1;
    } else if (R-r > d) {
        return 0;
    } else {
        return 2;
    }
}

bool testcase_ends() {
    double x, y, r;
    if (scanf("%lf %lf %lf", &x, &y, &r) == EOF) return 1;

    Circle A(Point(x, y), r);
    scanf("%lf %lf %lf", &x, &y, &r);
    Circle B(Point(x, y), r);

    size_t n=num_ctangent(A, B);
    if (n == 0) {
        printf("%d\n", A.r>B.r? 2:-2);
    } else {
        printf("%d\n", n!=4);
    }

    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; ++i)
        if (testcase_ends())
            return 1;

    return 0;
}