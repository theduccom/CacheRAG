#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;
int main(){
    double x,h,temen,ht,mt,hyomen;
    for(;;){
        cin>>x>>h;
        if(x==0&&h==0)break;
        temen=x*x;
        ht=(x/2)*(x/2);
        h=h*h;
        mt=sqrt(ht+h);
        hyomen=(mt*x)*2+temen;
        printf("%.6f",hyomen);
        cout<<endl;
    }
    return 0;
}