#include <stdio.h>
#include <stdbool.h>

char judgeScore(int, int, int);

int main(void)
{
    int amount_student, score_math, score_eng, score_jpn;

    while (true) {
        scanf("%d", &amount_student);
        
        if (amount_student == 0) {
            break;
        }
        
        for (int num_student = 0; num_student < amount_student; num_student++) {
            scanf("%d%d%d", &score_math, &score_eng, &score_jpn);
            printf("%c\n", judgeScore(score_math, score_eng, score_jpn));  
        }
    }
    
    return 0;
}

char judgeScore(int x, int y, int z)
{
    int average_all = (x + y + z) / 3; //切り捨てが起こっても大丈夫
    if (x == 100 || y == 100 || z == 100) {
        return 'A';
    } else if ((x+y) / 2 >= 90) {
        return 'A';
    } else if (average_all >= 80) {
        return 'A';
    } else if (average_all >= 70) {
        return 'B';
    } else if (average_all >= 50 && (x >= 80 || y >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
}