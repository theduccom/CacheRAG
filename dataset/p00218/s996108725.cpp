#include <stdio.h>

void judge(int pm, int pe, int pj);

int main(void)
{
    int dataset;
    int pm, pe, pj;

    while (1){
        scanf("%d", &dataset);
        if (dataset == 0){
            break;
        } else {
            while (dataset--){
                scanf("%d %d %d", &pm, &pe, &pj);
                judge(pm, pe, pj);
            }
        }
    }

    return 0;
}

void judge(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100){
        printf("A\n");
    } else if (pm + pe >= 90 * 2){
        printf("A\n");
    } else if (pm + pe + pj >= 80 * 3){
        printf("A\n");
    } else if (pm + pe + pj >= 70 * 3){
        printf("B\n");
    } else if (pm + pe + pj >= 50 * 3 && (pm >= 80 || pe >= 80)){
        printf("B\n");
    } else {
        printf("C\n");
    }
}