#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    int x, h;
    while(cin >>x >>h){
        if(x == 0 && h == 0) break;
        double ans = x * x, tmp = x * (sqrt(((x / 2.0) * (x / 2.0)) + (h * h))) / 2;
        ans += (tmp * 4);
        printf("%f\n", ans);
    }
    return 0;
}