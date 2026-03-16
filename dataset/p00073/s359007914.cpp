#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<math.h>
using namespace std;
int main(){
    double  x,h,s;
    while(1){
        cin>>x>>h;
        if(x==0 && h==0){
            break;
        }
        double takasa;
        takasa=(x/2)*(x/2)+h*h;
        takasa=sqrt(takasa);
        s=(x*x)+(x*takasa/2)*4;
        printf("%.6lf",s);
        cout<<endl;
    }
    return 0;
}