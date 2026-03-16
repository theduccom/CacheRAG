#include <stdio.h>
#include <stdbool.h>

void printLeapYear(int, int);
bool judgeLeapYear(int);

int main(void)
{
    int start_year, end_year;
    bool first_data = true;
    
    while (true) {
        scanf("%d%d", &start_year, &end_year);
        
        if (start_year == 0 && end_year == 0) {
            break;
        }
        
        if(first_data) {
            first_data = false;
        } else {
            printf("\n");
        }
        printLeapYear(start_year, end_year);

    }
    
    return 0;
}

void printLeapYear(int start_year, int end_year)
{
    bool exist_leap_year = false;
    
    for (int year = start_year; year <= end_year; year++) {
        if (judgeLeapYear(year)) {
            exist_leap_year = true;
            printf("%d\n", year);
        }
    }

    if(!exist_leap_year) {
        printf("NA\n");
    }
}

bool judgeLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}