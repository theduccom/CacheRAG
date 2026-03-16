#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double xa, ya, ra, xb, yb, rb;
    int n;

    cin >> n;
    while(n--) {
        int ret = 1;
        double d;

        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        d = sqrt(pow(xb-xa, 2) + pow(yb-ya, 2));
        if (ra + rb < d) {
            ret = 0;
        }else if (ra - rb > d) {
            ret = 2;
        }else if (rb - ra > d) {
            ret = -2;
        }

        cout << ret << endl;
    }
    return 0;
}