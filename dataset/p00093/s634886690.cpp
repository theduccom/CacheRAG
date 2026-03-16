#include <stdio.h>

void Leap_Year(int start_year, int end_year)
{
    while ((start_year != 0) || (end_year != 0)) {
        if ((end_year - start_year >= 0) && (end_year - start_year < 4)) {
            if (((start_year % 4 == 0) && (start_year % 100 != 0)) || (start_year % 400 == 0)) {
                printf("%d\n", start_year);
            } else if (start_year % 4 < end_year % 4) {
                printf("NA\n");
            } else {
                if (start_year % 100 < end_year % 100) {
                    printf("%d\n", start_year + 4 - start_year % 4);
                } else if (start_year % 400 > start_year % 400) {
                    printf("%d\n", start_year + 4 - start_year % 4);
                } else {
                    printf("NA\n");
                }
            }
        } else {
            for (int i = start_year; i <= end_year; ++i) {
                if (i % 400 != 0) {
                    if ((i % 100 != 0) && (i % 4 == 0)) {
                        printf("%d\n", i);
                    }
                } else {
                    printf("%d\n", i);
                }
            }
        }
        scanf("%d %d", &start_year, &end_year);
        if ((start_year != 0) || (end_year != 0)) {
            printf("\n");
        }
    }
}

int main(void)
{
    
    int start_year, end_year;
    scanf("%d %d", &start_year, &end_year);
    Leap_Year(start_year, end_year);
    return 0;
}