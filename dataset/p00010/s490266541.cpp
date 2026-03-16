#include <cstdio>
#include <algorithm>
#include <complex>
using namespace std;

#define FOR(i,a,b)  for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n)    for (int i=0;i<(n);i++)
#define RREP(i,n)   for (int i=(n)-1;i>=0;i--)
#define pb push_back
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
typedef complex<double> C;


double dot(C a, C b) {
    return real(conj(a) * b);
}

double cross(C a, C b) {
    return imag(conj(a) * b);
}

C triangle_circumcenter(C a, C b, C c) {
    a -= c;
    b -= c;
    C z = (abs(a) * abs(a) * b - abs(b) * abs(b) * a) / (conj(a) * b - a * conj(b));
    z += c;
    return z;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        double x1, y1, x2, y2, x3, y3;
        scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        C a = C(x1, y1);
        C b = C(x2, y2);
        C c = C(x3, y3);
        C z = triangle_circumcenter(a, b, c);
        printf("%.3f %.3f %.3f\n", real(z), imag(z), abs(z-c));
    }
    return 0;
}