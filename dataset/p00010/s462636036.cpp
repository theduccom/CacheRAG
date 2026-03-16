
#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int main(){
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,x,y;
    double n,px,py,r;
    cin >> n;
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        a = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        b = sqrt(pow(x3-x2,2) + pow(y3-y2,2));
        c = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
        
        x = ((a*a)-((b*b)+(c*c)))/(-2*b*c);
        y = sqrt(1-x*x);
        r = a/(2*y);
        px = ((y1-y3)*(y1*y1 -y2*y2 +x1*x1 -x2*x2) -(y1-y2)*(y1*y1 -y3*y3 +x1*x1 -x3*x3)) / (2*(y1-y3)*(x1-x2)-2*(y1-y2)*(x1-x3));
        py = ((x1-x3)*(x1*x1 -x2*x2 +y1*y1 -y2*y2) -(x1-x2)*(x1*x1 -x3*x3 +y1*y1 -y3*y3)) / (2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));
        
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
}