#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


double polygon[20][2];

double area(double a, double b, double c){
    double z = (a+b+c)/2;
    double s = sqrt(z*(z-a)*(z-b)*(z-c));
    return s;
}
double l(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(void)
{
    int n=0;
    double s=0.0;
    while(scanf("%lf,%lf",&polygon[n][0],&polygon[n][1]) != EOF){
        if(n>=2){
            double a,b,c;
            a=l(polygon[0][0], polygon[0][1], polygon[n][0], polygon[n][1]);
            b=l(polygon[0][0], polygon[0][1], polygon[n-1][0], polygon[n-1][1]);
            c=l(polygon[n-1][0], polygon[n-1][1], polygon[n][0], polygon[n][1]);
            s+=area(a,b,c);
        }
        n++;
    }
    
    cout<<setprecision(8)<<s<<endl;

    
}