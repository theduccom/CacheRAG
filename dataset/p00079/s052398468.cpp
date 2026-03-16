#include <stdio.h>
#include <math.h>
 
double getsquare(double x1,double y1,
        double x2,double y2,
        double x3,double y3);
 
int main(void) {
    double chouten[20][2];
    double s=0;
    int i;
    int max;
    for(i=0;i<20;i++) {
        if(scanf("%lf,%lf",&chouten[i][0],&chouten[i][1])==-1)break;
    }
    max=i;
    for(i=1;i<max-1;i++) {
        s+=getsquare(chouten[0][0],chouten[0][1],
            chouten[i][0],chouten[i][1],
            chouten[i+1][0],chouten[i+1][1]);
    }
    printf("%f\n",s);
    return 0;
}
 
double getsquare(double x1,double y1,
        double x2,double y2,
        double x3,double y3) {
    double len1,len2,len3;
    double z;
    len1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    len2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    len3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    z=(len1+len2+len3)/2;
    return sqrt(z*(z-len1)*(z-len2)*(z-len3));
}