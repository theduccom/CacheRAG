#include<cstdio>
#include<cmath>
int main(){
    int hos,ang;
    int t=90;
    double x=0,y=0;
    for(;;){
        scanf("%d,%d",&hos,&ang);
        if(hos==0 && ang ==0) break;
        x+=hos*cos(t*M_PI/180);
        y+=hos*sin(t*M_PI/180);
        t-=ang;
    }
    printf("%d\n%d\n",(int)x,(int)y);
}