#include <stdio.h>

void dividing_students(int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n != 0) {
        dividing_students(n);
        scanf("%d",&n);
    }
    return 0;
}

void dividing_students(int n)
{
    for (int i = 1; i <= n; ++i) {
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
        } else if ((math + english + japanese >= 150) && (math >= 80 || english >= 80)) {
            printf("B\n");
        } else {
            printf("C\n");
        }
    }
}