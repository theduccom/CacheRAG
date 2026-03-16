#include <stdio.h>

int main(void){
double max,min,n;
scanf("%lf",&n);
max=min=n;
while(scanf("%lf",&n)!=EOF){
if(n>max) max=n;
if(n<min) min=n;
}
printf("%f\n",max-min);
return 0;
}