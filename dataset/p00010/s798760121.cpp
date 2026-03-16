#include <bits/stdc++.h>

using namespace std;

double distance(double x1, double y1, double x2, double y2){
    return sqrt(pow(abs(x1-x2), 2)+pow(abs(y1-y2), 2));
}

int main(){
    int n; cin>> n;
    for(int i=0; i < n; i++){
        double x1,y1,x2,y2,x3,y3;
        cin >> x1 >>y1 >>x2 >>y2 >>x3 >>y3;
        double a = distance(x1, y1, x2, y2), b = distance(x2, y2, x3, y3), c = distance(x3, y3, x1, y1);
        double s = (a+b+c)/2;
        double r = (a*b*c)/(4.*sqrt(s*(s-a)*(s-b)*(s-c)));
        double a1 = 2*(x2-x1), b1 = 2*(y2-y1), c1 = x1*x1-x2*x2+y1*y1-y2*y2;
        double a2 = 2*(x3-x1), b2 = 2*(y3-y1), c2 = x1*x1-x3*x3+y1*y1-y3*y3;
        double x = (b1*c2-b2*c1)/(a1*b2-a2*b1);
        double y = (c1*a2-c2*a1)/(a1*b2-a2*b1);
        printf("%.3f %.3f %.3f\n", x, y, r);
    }
}