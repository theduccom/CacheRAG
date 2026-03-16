#include <iostream>
#include <cstdio>
#include <complex>

using namespace std;
typedef long long ll;

typedef double R;
typedef complex<R> P;

const R EPS = 1e-10;
const R PI = acos(-1);
int sgn(R a) {
    if (a < -EPS) return -1;
    if (a > EPS) return 1;
    return 0;
}


bool near(P a, P b) {
    return !sgn(abs(a-b));
}

double cross(const P &a, const P &b) { return imag(conj(a)*b); }
double dot(const P &a, const P &b) { return real(conj(a)*b); }

int n;
P p[30];
void solve() {
    R res = 0;
    for (int i = 2; i < n; i++) {
        res += abs(cross(p[i-1]-p[0], p[i]-p[0])) / 2.0;
    }
    printf("%.20f\n", res);
}


int main() {
    n = 0;
    while (true) {
        R x, y;
        if (scanf("%lf,%lf", &x, &y) <= 0) break;
        p[n] = P(x, y); n++;
    }
    solve();
    return 0;
}