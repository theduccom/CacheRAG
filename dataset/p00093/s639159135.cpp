#include <iostream>

using namespace std;

int main() {
    int a, b, n = 10000;
    while (cin >> a >> b && a != 0) {
        if (n != 10000) {
            cout << endl;
        }
        n = 0;
        for (int i = a; i <= b; i++) {
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    cout << i << endl;
                    n++;
                }
            }
            else if (i % 4 == 0) {
                cout << i << endl;
                n++;
            }
        }
        if (n == 0) {
            cout << "NA" << endl;
        }
    }

    return 0;
}