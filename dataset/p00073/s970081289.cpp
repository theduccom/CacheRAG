#include <cstdio>
#include <math.h>

int main(){
    int x, h;
    double S;

    for(;;){
        scanf("%d", &x);
        scanf("%d", &h);
        if(x == 0 && h == 0) break;
        double th = sqrt(((double)x/2*(double)x/2)+(h*h));
        S = x * x;
        S += 4 * ((double)x * th / 2);
        printf("%f\n", S);
    }

    return 0;
}