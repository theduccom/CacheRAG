#include <stdio.h>

void dividing(int pm, int pe, int pj);

int main(void)
{
    int number;
    scanf("%d\n", &number);    
    while (number != 0) {
        int pm[number];
        int pe[number];
        int pj[number];
        for (int i = 0; i < number; ++i) {
            scanf("%d %d %d", &pm[i], &pe[i], &pj[i]);
            dividing(pm[i], pe[i], pj[i]);
        }
        scanf("%d", &number);
    }
}
void dividing(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100) {
        printf("A\n");
        return;
    }
    if ((pm + pe) / 2 >= 90) {
        printf("A\n");
        return;
    }
    if ((pm + pe + pj) / 3 >= 80) {
        printf("A\n");
        return;
    }
    if ((pm + pe + pj) / 3 >= 70) {
        printf("B\n");
        return;
    }
    if (((pm + pe + pj) / 3 >= 50) && (pm >= 80 || pe >= 80)) {
        printf("B\n");
        return;
    }
    printf("C\n");
    return;
}