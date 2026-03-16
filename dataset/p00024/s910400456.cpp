#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    double n;
    while(cin >> n) {
        for (int i = 1; i < 1000; ++i) {
            double h = 5 * i - 5;
            double t = sqrt(h / 4.9);
            double v = 9.8 * t;
            if (v >= n) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

