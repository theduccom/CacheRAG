#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

double solve(int x, int h){
    double h2 = sqrt((x/2.0)*(x/2.0) + h*h);
    return x*x + (x * h2 / 2) * 4;
}

int main(){
    int x, h;
    while(cin >> x >> h){
        if(x == 0 && h == 0) break;
        printf("%f\n", solve(x, h));
    }
    return 0;
}