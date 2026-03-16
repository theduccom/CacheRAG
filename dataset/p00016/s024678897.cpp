#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

double before_degree = 0;;

int main(void){

    int length = 0,degree = 0;
    double x = 0,y = 0;
    char c;
    double pi = M_PI;
    
    while(cin >> length  >> c >> degree){
        if(length == 0 && degree == 0){
            break;
        }
        
        x += (double)(length * sin((pi * before_degree) / 180));
        y += (double)(length * cos((pi * before_degree) / 180));
        before_degree = (double)(degree + before_degree);
        
    }

    printf("%d\n%d\n",(int)x,(int)y);

    return 0;
}