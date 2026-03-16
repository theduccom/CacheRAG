#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    int x,h;
    while(cin >> x >>h, x+h){
        double ss = sqrt(.25*x*x+h*h)*x/2;
        double s = 4*ss+x*x;
        printf("%.10f\n",s);
    }
    return 0;
}