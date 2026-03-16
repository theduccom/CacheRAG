#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
double x,h,s,b;
int main(){
    for(;;){
        cin>>x>>h;
        if(x==0||h==0)break;
        b=h*h+x*x/4;
        double d=sqrt(b);
        b=x*d/2;
        x=x*x;
        s=x+b*4;
        printf("%f\n",s);
    }
return 0;
}