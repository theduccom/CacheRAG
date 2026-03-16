#include<stdio.h>
int main(void)
{
    int n, i, masatoy[10000];
    int str[10] = { 0,0,0,0,0,0,0,0,0,0 }, k;
    scanf("%d", &n);
    while (n > 0) {
        for (i = 0; i < n; i++) {
            scanf("%d", &masatoy[i]);
            for (k = 0; k <= 9; k++) {
                if (masatoy[i] == k) {
                    str[k]++;
                }
            }

        }
        for (i = 0; i <= 9; i++) {
            if (str[i] == 0) {
                printf("-\n");
            }
            else {
                for (k = 0; k < str[i]; k++) {
                    printf("*");
                }
                printf("\n");
            }

        }
        scanf("%d", &n);
        for (i = 0; i <=9; i++) {
            str[i] = 0; 
     
        }
    }
    return 0;
}