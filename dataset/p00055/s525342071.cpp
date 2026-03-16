#include <stdio.h>
#include <math.h>

int main(void){
    double a,sum;
    
    while (scanf("%lf", &a)!=EOF){
        sum=0;
        for(int i=1; i<=10; i++){
            sum+=a;
      //      printf("%2d:%8f (sum:%.6f)\n",i,a,sum);
            if (i%2) a *= 2;
            else a /= 3;
        }
        printf("%f\n",sum);
    }
    return 0;
}