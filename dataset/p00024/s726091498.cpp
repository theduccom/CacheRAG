#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double v, t;
    int y;
    while (cin >> v) {
        t = v / 9.8;
        y = ceil(4.9 * t * t);
        while (y % 5 != 0) {
            y++;
        }
        cout << y / 5 + 1 << endl;
    }

    return 0;
}