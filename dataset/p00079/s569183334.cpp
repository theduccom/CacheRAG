#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf,%lf %lf,%lf", &x1, &y1, &x2, &y2);
    double ans = 0.0;
    
    while(scanf("%lf,%lf", &x3, &y3) != EOF){
        double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1- y2)); 
        double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2- y3));
        double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3- y1));
        double z = (a + b + c) / 2;
        ans += sqrt(z * (z - a) * (z - b) * (z - c));
        x2 = x3; y2 = y3;
    }
    
    printf("%.7f\n", ans);
}