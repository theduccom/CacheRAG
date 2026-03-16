#include<stdio.h>
#include<math.h>
 
int main(){
    double a;
    double b;
    double now=90;
    double x=0,y=0;
    double PI=3.14159265358;
    while(1){
        scanf("%lf,%lf",&a,&b);
        if(a==b&&b==0)break;
        x+=cos(now*PI/180)*a;
        y+=sin(now*PI/180)*a;
        now-=b;
    }
    printf("%d\n%d\n",(int)x,(int)y);
}