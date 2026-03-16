#include <iostream>
using namespace std;
int main() {
    double v;
    while (cin >> v) {
        cout << (int)(v * v * 1 / 98 + 1.9999999999999999) << endl;
    }
    return 0;
}