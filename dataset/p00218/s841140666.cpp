#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, pm, pe, pj;
    while (cin >> n, n) {
        for (int i=0; i<n; ++i) {
            cin >> pm >> pe >> pj;
            if (max(pm, max(pe, pj)) == 100) {
                cout << "A" << endl;
            } else if (180 <= pm + pe) {
                cout << "A" << endl;
            } else if (240 <= pm + pe + pj) {
                cout << "A" << endl;
            } else if (210 <= pm + pe + pj) {
                cout << "B" << endl;
            } else if (150 <= pm + pe + pj && 80 <= max(pm, pe)) {
                cout << "B" << endl;
            } else {
                cout << "C" << endl;
            }
        }
    }
    return 0;
}