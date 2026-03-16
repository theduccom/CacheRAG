#include<cstdio>
#include<cmath>
int main(){
    double x,h;
    for(;;){
        scanf("%lf%lf",&x,&h);
        if(x==0&&h==0)break;
        printf("%lf\n",x*sqrt((x/2)*(x/2)+h*h)*2+x*x);
    }
}