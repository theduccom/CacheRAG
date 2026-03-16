#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#define PI 3.1415926535897932384626433
using namespace std;
int main(){
    double nowx=0,nowy=0,nowkaku=PI/2;
    while(1){
        double ho,kaku;
        scanf("%lf,%lf",&ho,&kaku);
        if(ho==0&&kaku==0)break;
        nowy+=sin(nowkaku)*ho;
        nowx+=cos(nowkaku)*ho;
        nowkaku+=PI/180*kaku;
    }
    printf("%d\n%d\n",(int)nowx*-1,(int)nowy);
    return 0;
}