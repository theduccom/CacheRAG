#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double sqnorm(double x1, double y1, double x2, double y2) {
    return pow((x1 - x2), 2) + pow((y1 - y2), 2);
}

int main(void) {
    int N; cin >> N;
    double x1, y1, x2, y2, x3, y3;
    double lsq, msq, nsq, l, n;
    double cos, a, b, c, d, e, f, det;
    double r, px, py;
    for(int i = 0; i < N; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        lsq = sqnorm(x1, y1, x2, y2);
        msq = sqnorm(x2, y2, x3, y3);
        nsq = sqnorm(x3, y3, x1, y1);
        l = sqrt(lsq);
        n = sqrt(nsq);
        cos = (msq + nsq - lsq) / (2.0 * sqrt(msq * nsq));
        r = sqrt(lsq / (4.0 * (1.0 - cos * cos)));
        a = (x2 - x1) / l;
        b = (y2 - y1) / l;
        c = (x3 - x1) / n;
        d = (y3 - y1) / n;
        e = l / 2.0;
        f = n / 2.0;
        det = a* d - b * c;
        px = (d * e - b * f) / det + x1;
        py = (-c * e + a * f) / det + y1;
        r = roundf(r * 1000.0) / 1000.0;
        px = roundf(px * 1000.0) / 1000.0;
        py = roundf(py * 1000.0) / 1000.0;
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
}