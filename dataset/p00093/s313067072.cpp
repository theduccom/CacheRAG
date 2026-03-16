#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year)
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

int main(void)
{
    int y_ini, y_fin;
    int count = 0;
    int new_line = 0;
    while(1) {
        scanf("%d %d", &y_ini, &y_fin);
    
        if (y_ini == 0 && y_fin == 0) {
            break;
        }
        
        if (new_line != 0) {
            printf("\n");
        }

        for (int year = y_ini; year <= y_fin; year++) {
            if (leap_year(year) == true){
                printf("%d\n", year);
                count++;
            }
        }
        
        if (count == 0) {
            printf("NA\n");
        }
        
        new_line++;        
        count = 0;
    }
            
    return 0;
}