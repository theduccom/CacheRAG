#include <stdio.h>

void divide(int math, int english, int japanese);

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
                divide(math, english, japanese);
            }
        }
    }

    return 0;
}

void divide(int math, int english, int japanese)
{
    int sum = math + english + japanese;

    if (math == 100 || english == 100 || japanese == 100){
        printf("A\n");
    } else if (math + english >= 90 * 2){
        printf("A\n");
    } else if (sum >= 80 * 3){
        printf("A\n");
    } else if (sum >= 70 * 3){
        printf("B\n");
    } else if (sum >= 50 * 3 && (math >= 80 || english >= 80)){
        printf("B\n");
    } else {
        printf("C\n");
    }
}