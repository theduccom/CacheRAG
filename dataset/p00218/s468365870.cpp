#include <stdio.h>

char dividing(int pm, int pe, int pj);

int main(void)
{
    while (1) {
        int number;
        scanf("%d", &number);
        if (number == 0) {
            break;
        } else {
            for (int i = 0; i < number; i++) {
                int pm, pe, pj;
                scanf("%d %d %d", &pm, &pe, &pj);
                printf("%c\n", dividing(pm, pe, pj));
            }
        }
    }
}

char dividing(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100 || (pm + pe) / 2 >= 90 || (pm + pe + pj) / 3 >= 80) {
        return 'A';
    } else if ((pm + pe + pj) / 3 >= 70 || ((pm + pe + pj) / 3 >= 50 && (pm >= 80 || pe >= 80))) {
        return 'B';
    } else {
        return 'C';
    }
}