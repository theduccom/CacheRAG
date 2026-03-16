#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, theta=90;
    double x=0.0, y=0.0;
    double PI=3.14159265358;
    while(scanf("%d,%d",&a, &b)!=EOF){
        if(a+b==0) break;
        x+=(double)a*cos(theta*PI/180);
        y+=(double)a*sin(theta*PI/180);
        theta-=b;
    }
    cout << (int)x << "\n" << (int)y << "\n";
}

