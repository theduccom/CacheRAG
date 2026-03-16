#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    double a;
    while (cin >> a) {
        double sum = 0;
        sum += a;
        sum += a * 2;
        sum += a * 2 / 3;
        sum += a * 4 / 3;
        sum += a * 4 / 9;
        sum += a * 8 / 9;
        sum += a * 8 / 27;
        sum += a * 16 / 27;
        sum += a * 16 / 81;
        sum += a * 32 / 81;
        cout.precision(8);
        cout << fixed;
        cout << sum << endl;
    }
    return 0;
}