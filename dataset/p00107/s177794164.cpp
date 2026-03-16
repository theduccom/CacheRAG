#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int A, B, C;
    while (cin >> A >> B >> C && (A || B || C)) {
        int t = 1e9;
        t = min(t, A * A + B * B);
        t = min(t, B * B + C * C);
        t = min(t, C * C + A * A);
        int n, R;
        cin >> n;
        for (int i=0; i<n; ++i) {
            cin >> R;
            if (t < 4 * R * R) {
                cout << "OK" << endl;
            } else {
                cout << "NA" << endl;
            }
        }
    }
    return 0;
}