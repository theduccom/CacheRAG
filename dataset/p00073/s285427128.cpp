#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, h;
    while (1) {
        cin >> x; cin >> h;
        if (x == 0 && h == 0) {
            break;
        }
        cout.precision(10);
        cout << x * x + sqrt((x/2)*(x/2) + h*h) * x * 2 << endl;
    }
    return 0;
}