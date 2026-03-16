#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    double a,b,c;
    int cou1=0,cou2=0;
    while(scanf("%lf,%lf,%lf",&a,&b,&c)!=EOF){
        if(a*a+b*b==c*c)cou1++;
        if(a==b)cou2++;
    }
    printf("%d\n%d\n",cou1,cou2);
    return 0;
}