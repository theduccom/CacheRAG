#include <stdio.h>

void leap_year(int x, int y)
{
    int z = 0;
    while (x <= y) {
        if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0)) {
            printf("%d\n", x);
            z += 1;
        }
        x += 1;
    }
    if (z == 0) {
        printf("NA\n");
    }       
}

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (!(a == 0 && b == 0)) { 
        leap_year(a, b);
        }
    scanf("%d %d", &a, &b);
    while(!(a == 0 && b == 0)) {
        printf("\n");
        leap_year(a, b);
        scanf("%d %d", &a, &b);
    }
    return 0;
}