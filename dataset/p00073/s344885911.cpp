#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

    double x,h;

    while(cin>>x>>h , x || h){
        printf("%lf\n",x * x + sqrt(x / 2.0 * x / 2.0 + h * h) * x / 2.0 * 4);
    }

    return 0;
}