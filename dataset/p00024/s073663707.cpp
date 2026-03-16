#include <stdio.h>

#define G 9.8
int main(void){
    double v,h;
    int fl;
    
    while (scanf("%lf", &v)!=EOF){
        h=v*v/(2*G);
        for (fl=1; (5*fl-5)<h; fl++) ;
        printf("%d\n", fl);
    }

    return 0;
}