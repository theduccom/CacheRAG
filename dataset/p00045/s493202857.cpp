#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,m;
    int sum=0,x=0;
    int cnt = 0;
    double ave = 0;
    while(scanf("%d,%d",&n,&m)!=EOF){
        sum += n*m;
        cnt++;
        x += m;
        ave = (double)x/cnt;
    }
    ave += 0.4;

    printf("%d\n%.0lf\n",sum,ave);
    return 0;
}