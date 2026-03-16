#include <cstdio>
#include <cstdlib>
#include <cmath>

inline bool isp(int n) {
    int ed = (int) sqrtf((float) n);
    for (int i = 2; i <= ed; ++i) {
        if ((n % i) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int mx = 0;
        int mi = 0;

        for (int i = n - 1; true; --i) {
            if (isp(i)) {
                mx = i;
                break;
            }
        }

        for (int i = n + 1; true; ++i) {
            if (isp(i)) {
                mi = i;
                break;
            }
        }

        printf("%d %d\n", mx, mi);
    }

    return 0;
}