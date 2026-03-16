#include <stdio.h>

float mean2(int x, int y)
{
    return (float)(x + y) / 2.0;
}

float mean3(int x, int y, int z)
{
    return (float)(x + y + z) / 3.0;
}

char grading(int p_math, int p_eng, int p_jpn)
{
    if ( p_math == 100 || p_eng == 100 || p_jpn == 100) {
        return 'A';
    } else if (mean2(p_math, p_eng) >= 90.0) {
        return 'A';
    } else if (mean3(p_math, p_eng, p_jpn) >= 80.0) {
        return 'A';
    } else if (mean3(p_math, p_eng, p_jpn) >= 70.0) {
        return 'B';
    } else if (mean3(p_math, p_eng, p_jpn) >= 50.0 && (p_math >= 80 || p_eng >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
}

int main(void)
{
    int i, p_math, p_eng, p_jpn, n_iteration;
    char grade;

    while (1) {
        scanf("%d", &n_iteration);

        if (n_iteration == 0) {
            break;
        }

        for (i = 0; i < n_iteration; i++) {
            scanf("%d %d %d", &p_math, &p_eng, &p_jpn);
            grade = grading(p_math, p_eng, p_jpn);
            printf("%c\n", grade);
        }
    }
    return 0;
}    