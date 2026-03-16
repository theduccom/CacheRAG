#include <stdio.h>

void leap(int start, int end);

int main(void)
{
    int start, end;
    while (1){
        scanf("%d %d", &start, &end);
        if (start == 0 && end == 0){
            break;
        } else {
            leap(start, end);
        }
    }

    return 0;
}

void leap(int start, int end)
{
    static int first_output = 1;
    if (first_output != 1){
        printf("\n");
    }
    first_output = 0;

    int cnt = 0;
    for (int year = start; year <= end; year++){
        if (year % 4 == 0 && year % 100 != 0){
            printf("%d\n", year);
            cnt++;
        }
        if (year % 400 == 0){
            printf("%d\n", year);
            cnt++;
        }
    }
    if (cnt == 0){
        printf("NA\n");
    }
}