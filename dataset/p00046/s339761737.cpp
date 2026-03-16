#include <cstdio>

int main() {
    double h[100] = { 0 };
    int co = 0;

    while (scanf("%lf", &h[co]) != EOF) {co++;}

    double mi = h[0];
    double mx = 0.0f;

    for (int i = 0; i < co; ++i) {
        if (h[i] < mi) {
            mi = h[i];
        }

        if (mx < h[i]) {
            mx = h[i];
        }
    }

    printf("%lf\n", mx - mi);

    return 0;
}