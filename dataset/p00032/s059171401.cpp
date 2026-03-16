#include <cstdio>

int main() {
    int a,b,r;
    int re = 0;
    int rh = 0;

    while (scanf("%d,%d,%d", &a, &b, &r) != EOF) {
        if (a == b) {
            rh++;
        } else if ((a * a) + (b * b) == (r * r)) {
            re++;
        }
    }

    printf("%d\n%d\n", re, rh);

    return 0;
}