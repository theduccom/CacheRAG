#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;

        double d = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
        double sr = (ra + rb) * (ra + rb);
        double dr = (ra - rb) * (ra - rb);

        int res = 1;
        if (sr < d) {
            res = 0;
        } else if (d < dr) {
            res = (ra > rb) ? 2 : -2;
        }
        cout << res << endl;
    }
}