#include <stdio.h>

char cat_stu(int pm, int pe, int pj)
{
    int ave;
    ave = (pm + pe + pj) / 3;
    
    if (pm == 100 || pe == 100 || pj == 100) {
        return 'A';
    } else if ((pm + pe) / 2 >= 90) {
        return 'A';
    } else if (ave >= 80) {
        return 'A';
    } else if (ave >= 70) {
        return 'B';
    } else if (ave >= 50 && (pm >= 80 || pe >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
}

int main(void)
{
    int a;
    int pm, pe, pj;

    while(1) {
        scanf("%d", &a);
        
        if (a == 0) {
            break;
        }
    
        for (int i = 0; i < a; i++) {
            scanf("%d %d %d", &pm, &pe, &pj);
            printf("%c\n", cat_stu(pm, pe, pj));
        }
    }
        
    return 0;
}