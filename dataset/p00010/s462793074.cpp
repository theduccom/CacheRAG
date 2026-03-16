#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double length(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double round(double d) {
    if (d < 0) {
        d *= 1000;
        d -= 0.5;
        int i = d;
        d = i / 1000.0;
    } else {
        d *= 1000;
        d += 0.5;
        int i = d;
        d = i / 1000.0;
    }

    return d;
}

int main() {

    int n;
    cin >> n;

    double x1, y1, x2, y2, x3, y3, px, py, r;
    for (int i = 0; i < n; ++i) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        px = ((y1 - y3) * (pow(x1, 2) - pow(x2, 2) + pow(y1, 2) - pow(y2, 2)) - (y1 - y2) * (pow(x1, 2) - pow(x3, 2) + pow(y1, 2) - pow(y3, 2))) / ((x1 - x2) * (y1 - y3) - (x1 - x3) * (y1 - y2)) / 2.0;
        py = ((x1 - x3) * (pow(x1, 2) - pow(x2, 2) + pow(y1, 2) - pow(y2, 2)) - (x1 - x2) * (pow(x1, 2) - pow(x3, 2) + pow(y1, 2) - pow(y3, 2))) / ((x1 - x3) * (y1 - y2) - (x1 - x2) * (y1 - y3)) / 2.0;
        r = length(x1, y1, px, py);

        px = round(px);
        py = round(py);
        r = round(r);

        cout << fixed << setprecision(3) << px << " " << py << " " << r << endl;
    }

    return 0;
}