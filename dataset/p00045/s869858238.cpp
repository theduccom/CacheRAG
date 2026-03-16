#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int sum=0;
    double avg=0;
    double d;
    int i,j,cnt=0;
    while(scanf("%d,%d",&i,&j) != EOF){
        sum += i * j;
        avg += j;
        cnt++;
    }
    d = avg / cnt;
    d += 0.5;
    printf("%d\n%.0lf\n",sum,d);
}