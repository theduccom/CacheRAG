#include <iostream>
using namespace std;

int main(void) {
    double a[10], v1, v2;
    char c;
    while (cin >> a[0]) {
        for (int i= 1; i < 10; ++i)
            cin >> c >> a[i];
        cin >> c >> v1 >> c >> v2;

        double t = 0.0;
        for (int i = 0; i < 10; ++i)
            t += a[i] / (v1 + v2);

        double t2 = 0.0;
        for (int i = 0; i < 10; ++i) {
            t2 += a[i] / v1;
            if (t2 >= t) {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}

