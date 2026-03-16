#include <stdio.h>

int main(void){
    double hi,lo, tmp;

    hi = 0;
    lo = 65536;
    while (scanf("%lf", &tmp)!= EOF){
        if (tmp > hi) hi = tmp;
        if (tmp < lo) lo = tmp;
    }
    printf("%f\n", hi-lo);

    return 0;
}