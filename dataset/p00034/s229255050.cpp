#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int l[10], v1, v2;
    char c;
    while (cin >> l[0]) {
        int sum = l[0];
        for (int i=1; i<10; ++i) {
            cin >> c >> l[i];
            sum += l[i];
        }
        cin >> c >> v1 >> c >> v2;

        int d = 0;
        for (int i=0; i<10; ++i) {
            d += l[i];
            if (v1 * sum <= d * (v1 + v2)) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}