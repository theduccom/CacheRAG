#include <cstdio>

int main() {
    int n = 0;

    while (scanf("%d", &n) != EOF) {
        int t = 1;
        bool firstIn = true;

        for (int i = 0; i < 10; ++i) {
            if ((n & t) == t) {
                if (!firstIn) {
                    printf(" ");
                }
                printf("%d", t);
                firstIn = false;
            }

            t *= 2;
        }
        printf("\n");
    }

    return 0;
}