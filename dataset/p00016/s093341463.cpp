#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    double x,y,a,c,rad;
    a=c=0;
    rad=M_PI/2;
    while(scanf("%lf,%lf",&x,&y),x||y){
        a+=x*sin(rad);
        c+=x*cos(rad);
        rad-=y/180*M_PI;
    }
    cout<<(int)c<<endl<<(int)a<<endl;
    return 0;
}