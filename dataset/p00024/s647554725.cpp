#include <cstdio>
#include <cmath>

using namespace std;

bool testcase_ends() {
    double v;
    if (scanf("%lf", &v) == EOF) return 1;

    int N;
    for (N=1; v>9.8*sqrt(5*(N-1)/4.9); ++N);

    printf("%d\n", N);
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}