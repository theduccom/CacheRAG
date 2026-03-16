#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
#define PI 3.14159265
int main()
{
    double x=0,y=0;
    int r,dth,th=0;
    while(true){
        scanf("%d,%d",&r,&dth);
        if(!r&&!dth)break;
        x+=r*sin((double)th*PI/180);
        y+=r*cos((double)th*PI/180);
        th+=dth;
    }
    cout<<int(x)<<endl;
    cout<<int(y)<<endl;
    return 0;
}
 