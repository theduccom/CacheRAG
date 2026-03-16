#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int x, h;
    while (cin >> x >> h, (x || h)) {
        double area = x * x + 2.0 * x * sqrt(h * h + x * x / 4.0);
        cout.precision(6);
        cout << fixed << area << endl;
    }
    return 0;
}