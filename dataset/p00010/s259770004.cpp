#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define eps 1e-8
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x1, x2, y1, y2, a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        x1 = c - a; y1 = d - b;
        x2 = e - a; y2 = f - b;
        double x = (y1 * (x2 * x2 + y2 * y2) - y2 * (x1 * x1 + y1 * y1)) / (2 * (y1 * x2 - x1 * y2));
        double y, r;
        if (-eps < y1 && y1 < eps) y = y2 / 2 - (x2 / y2) * (x - x2 / 2);
        else y = y1 / 2 - (x1 / y1) * (x - x1 / 2);
        r = sqrt(x * x + y * y);
//        printf("%.5f\n", r);
        x += a; y += b;
        int intx = x * 10000;
        int inty = y * 10000;
        int intr = r * 10000;
        if (intx % 10 >= 5) x = (intx + 5) / 10000.0;
        if (inty % 10 >= 5) y = (inty + 5) / 10000.0;
        if (intr % 10 >= 5) r = (intr + 5) / 10000.0;
        printf("%.3f %.3f %.3f\n", x, y, r);
    }
    return 0;
}