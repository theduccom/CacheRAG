#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    double d;
    while (cin >> d) {
        double ret = d;
        for (int i = 2; i <= 10; i++) {
            if (i % 2 == 0) {
                d *= 2.0;
            } else {
                d /= 3.0;
            }

            ret += d;
        }

        printf("%.8lf\n", ret);
    }

    return 0;
}