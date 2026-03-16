#include <bits/stdc++.h>

using namespace std;

struct P {
    double x, y;
    bool operator<(const P &r) const {
        return x < r.x;
    }
};

int main() {

    int n;
    char split;
    double a, b, c, x, y, z, s = 0;
    P p[20];

    for(n = 0; cin >> x >> split >> y; ++n) {

        p[n].x = x;
        p[n].y = y;

    }

    for(int i = 0; i < n - 2; ++i) {

        a = hypot(p[0].x - p[i + 1].x, p[0].y - p[i + 1].y);
        b = hypot(p[0].x - p[i + 2].x, p[0].y - p[i + 2].y);
        c = hypot(p[i + 1].x - p[i + 2].x, p[i + 1].y - p[i + 2].y);

        z = (a + b + c) / 2;

        s += sqrt(z * (z - a) * (z - b) * (z - c));

    }

    printf("%.6f\n", s);

}