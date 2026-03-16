#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
signed main(){
        int a,b;
        double x=0,y=0;
        double d=90;
        while( scanf("%d,%d", &a, &b) != EOF ){
                if(a==0&&b==0) break;
                x+=a*cos(d*M_PI/180);
                y+=a*sin(d*M_PI/180);
                d-=b;
        }
        printf("%d\n%d\n",(int)x,(int)y);
        return 0;
}