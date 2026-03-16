#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main () {
    double b[10];
    double v1,v2;
    
    while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&b[0],&b[1],&b[2],&b[3],&b[4],&b[5],&b[6],&b[7],&b[8],&b[9],&v1,&v2)!=EOF){
        double l = b[0]+b[1]+b[2]+b[3]+b[4]+b[5]+b[6]+b[7]+b[8]+b[9];
        double t = l/(v1+v2);
        double l1 = t*v1;
        for(int i=0; i<10; i++){
            l1-=b[i];
            if(l1<=0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}