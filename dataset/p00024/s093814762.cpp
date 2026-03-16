#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    double v;
    while (cin >> v) {
        cout << (int)(v * v * 10 / 980 - 1e-9) + 2 << endl;
    }
    return 0;
}