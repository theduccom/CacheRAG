#include <cstdio>

int pr[10000] = { 0 };
int n[10000] = { 0 };

int main() {
    int co = 0;
    int sum = 0;
    int allco = 0;
    for (int i = 0; scanf("%d,%d", &pr[i], &n[i]) != EOF; ++i) {co++;}

    for (int i = 0; i < co; ++i) {
        sum += pr[i] * n[i];
        allco += n[i];
    }

    int ave = 0;
    {
        double t = allco / (double) co;
        ave = (int) (t + 0.5d);
    }

    printf("%d\n%d\n", sum, ave);

    return 0;
}