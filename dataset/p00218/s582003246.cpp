#include <stdio.h>

int main()
{
    int n;
    int jap, math, eng;
    int i, j;

    scanf("%d", &n);
    while (n != 0) {
        for (i = 0; i < n; i++) {
            scanf("%d %d %d", &math, &eng, &jap);

            if ((math == 100 || eng == 100 || jap == 100) ||
                (math + eng) >= 180 ||
                math + eng + jap >= 240) {
                printf("A\n");
            } else if ((math + eng + jap) >= 210 ||
                       ((math + eng + jap) >= 150 && (math >= 80 || eng >= 80))) {
                printf("B\n");
            } else {
                printf("C\n");
            }
        }

        scanf("%d", &n);
    }
    

    return 0;
}

