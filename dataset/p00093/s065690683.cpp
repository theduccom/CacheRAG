#include <stdio.h>
#include <stdbool.h>

void leapyear (int year1, int year2)
{
    int i;
    int j = 0; 
    for (i = year1; i <= year2; ++i) {
        if (i % 4 == 0) {
            if (i % 100 != 0) {
                printf("%d\n", i);
                ++j;
            } else if (i % 400 == 0) {
                printf("%d\n", i);
                ++j;
            } 
        }
    }
    if (j == 0) {
        printf("NA\n");
    }
}

int main(void)
{
    int k = 0;
    while (true) {
        int year1, year2;
        scanf("%d %d", &year1, &year2);
        if (year1 == 0 && year2 == 0) {
            break;
        }
        if (k != 0) {
            printf("\n");
        }
        leapyear(year1, year2);
        ++k;
    }
    return 0;
}