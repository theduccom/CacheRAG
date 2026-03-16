
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double x,s,h;
    while(cin>>x>>h){
        if(x==0&&h==0)break;
        s=x*x+x*sqrt(x*x+4*h*h);
       printf("%.6f",s);
        cout<<endl;
    }
    return 0;
}