#include <stdio.h>
#include <stdbool.h>

void leapyear(int a, int b);
int a, b;
bool flag,flag2 = true;
int main(void)
{
    while (1) {
        flag =true;
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) {
            break;
        }
        if (flag2 == true) {
            flag2 =false;
        } else {
            printf("\n");
        }
        leapyear(a, b);
    }
    return 0;
}

void leapyear(int a, int b)
{
    for (int i = a; b >= i; ++i) {
        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    printf("%d\n", i);
                    flag = false;
                }
            } else {
                printf("%d\n", i);
                flag = false;
            } 
        }
    }
    if (flag == true) {
        printf("NA\n");
    }
}