#include <stdio.h>

bool isLeapYear(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}
        

int main(void)
{
    int year, from, until, num_leap_year, flag = 0;
    while (1) {
        num_leap_year = 0;
        scanf("%d %d", &from, &until);
        if (from == 0 && until == 0) {
            break;
        } else {
            if ( flag != 0) {
                printf("\n");
            }
        }
        for (year = from; year <= until; year++) {
            if (isLeapYear(year) == true) {
                num_leap_year++;
                printf("%d\n", year);
            }
        }
        if (num_leap_year == 0) {
            printf("NA\n");
        }
        flag++;
        //printf("\n");
    }
    return 0;
}