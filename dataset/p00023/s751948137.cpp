#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    while (n--) {
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double d = hypot(xa-xb, ya-yb);
        int res = 1;
        if (ra > rb) {
            if (d < ra - rb) res = 2;
            else if (d > ra + rb) res = 0;
        }
        else {
            if (d < rb - ra) res = -2;
            else if (d > ra + rb) res = 0;
        }
        cout << res << endl;
    }
    return 0;
}