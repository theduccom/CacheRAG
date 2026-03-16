#include <iostream>
#include <cstdio>
#include <complex>
#include <cmath>
using namespace std;
 
int main(int argc, char** argv) {
    double x, y;
    char c;
    cin >> x >> c >> y;
    complex<double> o(x, y);
    cin >> x >> c >> y;
    complex<double> a(x, y);
    a -= o;
    double s = 0.0;
    while(cin >> x >> c >> y) {
        complex<double> b(x, y);
        b -= o;
        s += 0.5*abs(a)*abs(b)*sin(abs(arg(a)-arg(b)));
        a = b;
    }
    printf("%.6f\n", s);
    return 0;
}
