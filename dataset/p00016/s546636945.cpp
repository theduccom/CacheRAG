#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    double x=0,y=0,met,theta,thetas=0,pi=3.1415926535897;
    while(1){
        scanf("%lf,%lf",&met,&theta);
        if(met==0&&theta==0) break;
        x+=met*sin(thetas*pi/180.0);
        y+=met*cos(thetas*pi/180.0);
        thetas+=theta;
    }
    printf("%d\n%d\n",(int)(floor(fabs(x))*x/fabs(x)),(int)(floor(fabs(y))*y/fabs(y)));
    return 0;
}