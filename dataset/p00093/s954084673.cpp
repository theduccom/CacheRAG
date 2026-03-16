#include <stdio.h>

int leap_year(int first_year, int last_year);

int main(void)
{
    int first_year, last_year;
    static int dataset_number = 0; 
    scanf("%d %d", &first_year, &last_year);
    while (1) {
        if (first_year == 0 && last_year == 0) {
            break;
        } else {
            if (dataset_number != 0) {
                printf("\n");
            }
            leap_year(first_year, last_year);
            scanf("%d %d", &first_year, &last_year);
        ++dataset_number;
        }
    }
    return 0;
}

int leap_year(int first_year, int last_year)
{
    int count = 0;
    for (int year = first_year; year <= last_year; ++year) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
           printf("%d\n", year);
        } else {
            ++count;
        }
    }
    if (count == last_year - first_year + 1) {
        printf("NA\n");
    }
    return 0;
}