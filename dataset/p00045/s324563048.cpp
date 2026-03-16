#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double price,sum,total_p=0,total_s,n=0;
    while(scanf("%lf,%lf",&price,&sum)!=EOF){
        total_p+=price*sum;
        total_s+=sum;
        n++;
    }
    total_s=total_s/n+0.5;
    printf("%d\n",(int)total_p);
    printf("%d\n",(int)total_s);
    return 0;
}