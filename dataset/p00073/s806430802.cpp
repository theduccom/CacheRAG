#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){
    
    int x,h;
    double sh;
    double sx;
    double ss;
    double s;
    
    
    while(cin>>x>>h,x!=0||h!=0){
        sh=h*h;
        sx=(double)(x/2.0)*(x/2.0);
        ss=sqrt(sh+sx);
        s=(double)(x)*(x)+4*ss*x*0.5;
    
        printf("%.6lf\n",s);
    }
    return(0);
}