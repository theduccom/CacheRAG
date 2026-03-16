#include <stdio.h>

int main() {
        const int N = 11;
        double s;
        double a[N];

        while (scanf("%lf", &a[1]) != EOF) {
                s = a[1];
                for (int i = 2; i < N; i++) {
                        if (i % 2) {
                                a[i] = a[i-1]/3;
                        } else {
                                a[i] = a[i-1]*2;
                        }
                        s += a[i];
                }
                printf("%lf\n", s);
        }

        return 0;
}