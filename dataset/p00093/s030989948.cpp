#include <stdio.h>
 
int start, end, year, answer, i;

int years(void)
{
     if (year % 4 == 0) {
        if (year % 100 != 0) {
            printf("%d\n", year);
            answer++;
        } else if (year % 400 == 0) {
            printf("%d\n", year);
            answer++;
        }
      }
}

int main(void)
{
    i = 0;
    while(1) {
    scanf("%d %d", &start, &end);
    if (start == 0 && end == 0) {
        break;
    }
    if (i != 0) {
        printf("\n");
    }
    i++;
    answer = 0;
    for (year = start; year <= end; year++) {
        years();
    }
    if (answer == 0) {
        printf("NA\n");
    }
    }
    return 0;
}