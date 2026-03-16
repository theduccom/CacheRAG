#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double xa, ya, ra, xb, yb, rb;
    while (n--) {
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double dd = (xb - xa) * (xb - xa) + (yb - ya) * (yb - ya);
        double d = sqrt(dd);
        if ((ra + rb) * (ra + rb) < dd) {
            cout << 0 << endl;
        } else if (d + ra < rb) {
            cout << -2 << endl;
        } else if (d + rb < ra) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}