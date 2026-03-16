#include <stdio.h>

char judge(int pm, int pe, int pj)
{
    int average = (pm + pe + pj) / 3;
    if (pm == 100 || pe == 100 || pj == 100) {
        return 'A';
    } else if ((pm + pe) / 2 >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'A';
    } else if (average >= 70) {
        return 'B';
    } else if (average >= 50 && (pm >= 80 || pe >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
}

int main(void)
{
    int n; //, pm, pe, pj;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int pm[n], pe[n], pj[n];
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d",&pm[i], &pe[i], &pj[i]);
        }
        for (int i = 0; i < n; i++) {
          printf("%c\n", judge(pm[i], pe[i], pj[i]));
        }
    }
    return 0;
}