#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double x[20], y[20], area = 0;
    int i = 0;
    while( scanf("%lf,%lf", &x[i], &y[i]) != EOF) i++;
    for(int j = 2; j < i; j++){
        double dx1 = x[j]-x[0], dy1 = y[j]-y[0];
        double dx2 = x[j-1]-x[0], dy2 = y[j-1]-y[0];
        double dx3 = x[j]-x[j-1], dy3 = y[j]-y[j-1];
        double a = sqrt(dx1*dx1+dy1*dy1);
        double b = sqrt(dx2*dx2+dy2*dy2);
        double c = sqrt(dx3*dx3+dy3*dy3);
        double z = (a+b+c)/2;
        area += sqrt(z*(z-a)*(z-b)*(z-c));
    }
    printf("%.6lf\n", abs(area));
    return 0;
}