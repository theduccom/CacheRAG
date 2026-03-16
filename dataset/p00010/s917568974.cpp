#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
 
double heronsMethod(double a, double b, double c){
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        double x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
        double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        double s = heronsMethod(a, b, c);
        double x = (a*a * (b*b + c*c - a*a) *x3 + b*b * (c*c + a*a - b*b) *x1 + c*c *(a*a + b*b - c*c) *x2) / (16 * s * s);
        double y = (a*a * (b*b + c*c - a*a) *y3 + b*b * (c*c + a*a - b*b) *y1 + c*c *(a*a + b*b - c*c) *y2) / (16 * s * s);
        double r = (a * b * c) / sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c));
        printf("%.3f %.3f %.3f\n", x, y, r);
    }
}