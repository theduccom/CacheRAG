#include <stdio.h>

void print_na(int a, int b);
void leap_year(int a, int b);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a != 0 || b != 0) {
        print_na(a, b);
        leap_year(a, b);
        scanf("%d %d", &a, &b);
    }
    while (a != 0 || b != 0) {
        printf("\n");
        print_na(a, b);
        leap_year(a, b);
        scanf("%d %d", &a, &b);
    }
    return 0;
}

void print_na(int a, int b)
{
    for (int i = a; i <= b; i++) {
        if ((i % 4 == 0 && !(i % 100 == 0)) || i % 400 == 0) {
            return;
        }
    }
    printf("NA\n");
}

void leap_year(int a, int b)
{
    for (int i = a; i <= b; i++) {
        if ((i % 4 == 0 && !(i % 100 == 0)) || i % 400 == 0) {
            printf("%d\n", i);
        }
    }
}