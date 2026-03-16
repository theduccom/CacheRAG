#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.141592
using namespace std;

int main(){
    int a, b;
    double x=0, y=0, dig=0;
    while(scanf("%d,%d",&a, &b)){
        if(a==0&&b==0) break;
        x += a*sin(dig*PI/180.0);
        y += a*cos(dig*PI/180.0);
        dig += b;
    }
    cout << (int)x << endl << (int)y << endl;
    return 0;
}