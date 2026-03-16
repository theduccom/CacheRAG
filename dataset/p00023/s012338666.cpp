#include    <iostream>
#include    <cmath>

using namespace std;

int main() {
    int n;
    double xa, ya, ra, xb, yb, rb, d;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> xa >> ya >> ra >> xb >> yb >> rb;

        d =sqrt(pow(xa - xb, 2.0) + pow(ya - yb, 2.0));
        if(d + rb < ra)          { cout << "2"  << endl; }
        else if(d + ra < rb) { cout << "-2" << endl; }
        else if(d <= ra + rb)    { cout << "1"  << endl; }
        else                    { cout << "0"  << endl; }
    }
    return 0;
}
