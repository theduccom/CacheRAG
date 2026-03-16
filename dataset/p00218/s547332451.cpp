#include <stdio.h>

void divide(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100) {
        printf("A\n");
    } else if (pm + pe >= 180) {
        printf("A\n");
    } else if (pm + pe + pj >= 240) {
        printf("A\n");
    } else if (pm + pe + pj >= 210) {
        printf("B\n");
    } else if (pm + pe + pj >= 150 && (pm >= 80 || pe >= 80)) {
        printf("B\n");
    } else {
        printf("C\n");
    }
}

int main(void)
{
    while(1){
        int n, pm, pe, pj;
        scanf("%d", &n);
        if (n == 0) {
            break;
        } else {
            for (int i = 0; i < n; ++i) {
                scanf("%d %d %d", &pm, &pe, &pj);
                divide(pm, pe, pj);
            }
        }
    }
    return 0;
}

        