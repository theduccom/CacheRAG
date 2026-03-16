#include <stdio.h>

char divide(int math, int english, int japanese);
char grade;

int main(void)
{
    int dataset;
    int math, english, japanese;

    while (1){
        scanf("%d", &dataset);
        if (dataset == 0){
            break;
        } else {
            while (dataset--){
                scanf("%d %d %d", &math, &english, &japanese);
                grade = divide(math, english, japanese);
                printf("%c\n", grade);
            }
        }
    }

    return 0;
}

char divide(int math, int english, int japanese)
{
    int sum = math + english + japanese;

    if (math == 100 || english == 100 || japanese == 100){
        grade = 'A';
    } else if (math + english >= 90 * 2){
        grade = 'A';
    } else if (sum >= 80 * 3){
        grade = 'A';
    } else if (sum >= 70 * 3){
        grade = 'B';
    } else if (sum >= 50 * 3 && (math >= 80 || english >= 80)){
        grade = 'B';
    } else {
        grade = 'C';
    }

    return grade;
}