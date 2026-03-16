#include <bits/stdc++.h>
using namespace std;


int main() {
    int T;
    cin >> T;
    double e,f,a,b,c,d;
    while(T--) {
        cin >> e >> f >> a >> b >> c >> d;
        a -= e; c -= e;
        b -= f; d -= f;
        double den = 2 * (d * a - b * c);
        double y = a * (c * c + d * d) - c * (a * a + b * b);
        double x = b * (c * c + d * d) - d * (a * a + b * b);
        y /= den;
        x /= -den;
        printf("%.3lf %.3lf %.3lf\n", x + e, y + f, sqrt(x * x + y * y));
    }
}
