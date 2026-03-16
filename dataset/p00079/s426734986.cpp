#include <iostream>
#include <complex>
#include <cmath>
#include <queue>
#include <iomanip>
using namespace std;
typedef complex<double> xy_t;
double dot_product(xy_t a, xy_t b) { return (conj(a) * b).real(); }
double cross_product(xy_t a, xy_t b) { return (conj(a) * b).imag(); }
xy_t projection(xy_t p, xy_t b) { return b * dot_product(p, b) / norm(b); }
int main()
{
    queue<xy_t> vertice;
    char dummy;
    xy_t first, second;
    double x, y;
    while (cin >> x >> dummy >> y)
    {
        vertice.push(xy_t(x, y));
    }
    xy_t origin = vertice.front();
    vertice.pop();
    double area = 0.0;
    while (vertice.size() != 1)
    {
        first = vertice.front()-origin;
        vertice.pop();
        second = vertice.front()-origin;
        area += cross_product(first, second);
    }
    cout << setprecision(10) << fixed;
    cout << 0.5 * abs(area) << endl;
}
