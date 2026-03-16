#include <stdio.h>
#include <stdbool.h>

void dividing_student (void)
{ 
    int math, english, japanese;
    scanf("%d %d %d", &math, &english, &japanese);
    if (math == 100 || english == 100 || japanese == 100) {
        printf("A\n");
    } else if (math + english >= 180) {
        printf("A\n");
    } else if (math + english + japanese >= 240) {
        printf("A\n");
    } else if (math + english + japanese >= 210) {
        printf("B\n"); 
    } else if (math + english + japanese >= 150 && (math >= 80 || english >= 80)) {
        printf("B\n");
    } else {
        printf("C\n");
    }
}

int main(void)
{
    while (true) {
        int n;
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        int i;
        for (i = 0; i < n; ++i) {
            dividing_student();
        }
    }
    return 0;
}