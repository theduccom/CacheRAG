#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b) { return (conj(a) * b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a) * b).imag(); }
xy_t projection(xy_t p, xy_t b) { return b * dot_product(p, b) / norm(b); }

xy_t P[110];

double area(xy_t a, xy_t b, xy_t c)
{
    double z = (abs(a) + abs(b) + abs(c)) / 2;

    return sqrt(z * (z - abs(a)) * (z - abs(b)) * (z - abs(c)));
}

int main()
{
    int N = 0;
    double x, y;
    while (scanf("%lf,%lf", &x, &y) != EOF)
    {
        P[N++] = xy_t(x, y);
    }

    double sum = 0.0;
    for (int i = 0; i + 2 < N; i++)
    {
        xy_t a = P[0], b = P[i + 1], c = P[i + 2];
        sum += area(a - b, b - c, c - a);
    }
    printf("%.6f\n", abs(sum));
}
