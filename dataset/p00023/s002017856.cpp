#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        double xa, ya, ra, xb, yb, rb;
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        double d = sqrt(pow((xa-xb),2.0) + pow((ya-yb),2.0));
        if (d + ra < rb)
            cout << -2;
        else if(d + rb < ra)
            cout << 2;
        else if (d <= ra + rb)
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
    return 0;
}

