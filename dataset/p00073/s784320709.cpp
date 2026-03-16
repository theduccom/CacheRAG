#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
        int x,h;
        cin >> x >> h;
        while(x||h){
                printf("%.6f\n",2*x*pow((double)x*x/4+(double)h*h,0.5)+x*x);
                cin >> x >> h;
        }   
}