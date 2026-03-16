#include <cstdio>
#include <complex>
#include <vector>

using namespace std;

typedef complex<double> Vector;

double cross(const Vector &v1, const Vector &v2) {
    return v1.real()*v2.imag() - v1.imag()*v2.real();
}

int main() {
    vector<Vector> v;
    double X, Y;
    while(scanf("%lf,%lf", &X, &Y) != -1) {
        v.push_back(Vector(X, Y));
    }
    const int N = v.size();
    double area = 0;
    for(int i = 0; i < N; ++i) {
        const int next = (i+1) % N;
        area += fabs(cross(v[i], v[next]));
    }
    printf("%f\n", area/2);
    return 0;
}