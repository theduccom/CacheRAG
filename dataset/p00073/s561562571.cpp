#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
    double x,h;
    while(cin>>x>>h,x){
        x=x*x+sqrt(h*h+x*x/4)*x*2;
        printf("%.6f\n",x);
    }
}