#include <stdio.h>
int main(){
    double a;
    int n;
    while(scanf("%lf",&a)!=EOF){
        for(n=0;n<a*a/98;n++);
        printf("%d\n",n+1);
    }
}