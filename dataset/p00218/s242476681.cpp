#include <stdio.h>
#include <stdbool.h>

int gradeStudents(int pm, int pe, int pj);

int main(void)
{
    int number;
    int pm, pe, pj;
    while (true) {
        scanf("%d", &number);
        if (number == 0) {
            break;
        }
        for (int i = 0; i < number; ++i) {
            scanf("%d %d %d", &pm, &pe, &pj);
            printf("%c\n", gradeStudents(pm, pe, pj));
        }
    }
    return 0;
}

int gradeStudents(int pm, int pe, int pj)
{
    char result;
    if (pm == 100 || pe == 100 || pj == 100) {
        result = 'A';
    } else if ((pm + pe) / 2 >=90) {
        result = 'A';
    } else if ((pm + pe + pj) / 3 >= 80) {
        result = 'A';
    } else if ((pm + pe + pj) / 3 >= 70) {
        result = 'B';
    } else if ((pm + pe + pj) / 3 >= 50 && (pm >= 80 || pe >= 80)) {
        result = 'B';
    } else {
        result = 'C';
    }
    return result;
}