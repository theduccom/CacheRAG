#include <cstdio>

#define square(a) a * a

int main(void)
{
    int e1, e2, dia;
    int rec, diamond;
    
    rec = diamond = 0;
    while (scanf("%d,%d,%d", &e1, &e2, &dia) != EOF){
        if ((square(e1) + square(e2)) == square(dia)){
            rec++;
        }
        else if (e1 == e2) diamond++;
    }
    
    printf("%d\n%d\n", rec, diamond);
}