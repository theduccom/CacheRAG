#include <stdio.h>
#include <stdbool.h>

char grading(int math, int english, int japanese)
{
    double average_math_and_english = (math + english) / 2;
    double average_total = (math + english + japanese) / 3;
    if (100 == math || 100 == english || 100 == japanese || average_math_and_english >= 90 || average_total >= 80) {
        return 'A';
    } else if (average_total >= 70 || (average_total >= 50 && (math >= 80 || english >= 80))) {
        return'B';
    } else {
        return 'C';
    }
}

int main(void)
{
    while(1){
        int student;
        scanf("%d", &student);
        if (0 == student) {
            return 0;
        } else {
            for(int i = 0; i < student; i++){
                int math;
                int english;
                int japanese;
                scanf("%d %d %d", &math, &english, &japanese);
                printf("%c\n", grading(math, english, japanese));
            }
        }
    }
}