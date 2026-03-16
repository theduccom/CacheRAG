#include <cstdio>

int main()
{
        const int MAX = 10;
        int l[MAX];
        int v1, v2;
        int sumL;

        while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
                                 &l[0], &l[1], &l[2], &l[3],
                                 &l[4], &l[5], &l[6], &l[7],
                                 &l[8], &l[9], &v1, &v2) != EOF) {
                sumL = 0;
                for (int i = 0; i < MAX; i++) {
                        sumL += l[i];
                }
                float l1 = v1 * ((float)sumL / (v1 + v2));
                int i = 0;
                while (l1 > 0) {
                        l1 -= l[i++];
                }
                printf("%d\n", i);
        }

        return 0;
}