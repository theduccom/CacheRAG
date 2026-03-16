#include <iostream>
#include <cmath>
using namespace std;

#define EPS 1e-8

int main() {
    int N; cin >> N;
    while (N--) {
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double d = sqrt( (xb-xa)*(xb-xa) + (yb-ya)*(yb-ya) );
        if (ra + rb < d) {
            cout << 0 << endl;
            continue;
        } 
        if (ra > rb) {
            if (ra - rb > d) {
                cout << 2 << endl;
                continue;
            } else {
                cout << 1 << endl;
                continue;
            }
        } else {
            if (rb - ra > d) {
                cout << -2 << endl;
                continue;
            } else {
                cout << 1 << endl;
                continue;
            }
        }
    }
    return 0;
}