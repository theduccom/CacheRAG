#include <algorithm>
#include <cstdio>
#include <vector>
#include <complex>
using namespace std;

//---------------------------------------------------------------
using P = complex<double>;
double dot(const P& a, const P& b) { return real(conj(a) * b); }
double cross(const P& a, const P& b) { return imag(conj(a) * b); }
//---------------------------------------------------------------

int main() {
    vector<P> ps;
    double x, y;
    while (~scanf("%lf,%lf", &x, &y)) {
        ps.emplace_back(x, y);
    }
    double sum = 0;
    P a = ps[0];
    for (int i = 0; i < ps.size() - 2; i++) {
        P b = ps[i + 1], c = ps[i + 2];
        sum += cross(b - a, c - a) / 2;
    }
    printf("%.6f\n", abs(sum));
    return 0;
}
