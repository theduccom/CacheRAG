#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    while (cin >> x) {
        double v = 0;
        int n = 1;
        while (v < x) {
            int f = 5 * n;
            double t = sqrt(f / 4.9);
            v = 9.8 * t;
            n++;
        }
        cout << n << endl;
    }
    return 0;
}