#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double h, minh = 1e6, maxh = 0;
    while (cin >> h) {
        minh = min(minh, h);
        maxh = max(maxh, h);
    }
    cout << maxh - minh << endl;

    return 0;
}