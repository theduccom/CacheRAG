#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    double sum = 0;
    double a[10];

    while (cin >> a[0]) {
        sum = 0;
        for (int i = 1; i < 10; i++) a[i] = 0;
        for (int i = 1; i < 10; i++) {
            if (i % 2 == 0) {
                a[i] = a[i-1] / 3.0;
            } else {
                a[i] = a[i-1] * 2.0;
            }
        }

        for (int i = 0; i < 10; i++) {
            sum += a[i];
        }

        printf("%.8f\n", sum);
//        cout << setw(2) << setprecision(10) << sum << endl;
    }
    return 0;
}