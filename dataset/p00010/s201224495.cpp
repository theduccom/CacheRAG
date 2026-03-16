#include <cmath>
#include <cstdio>
using namespace std;

int main(){
    int n;
    double x1, y1, x2, y2, x3, y3, det2, A, B, X, Y, R;
    scanf("%d", &n);
    while(n--){
        scanf("%lf %lf %lf %lf %lf %lf",
               &x1, &y1, &x2, &y2, &x3, &y3);
        det2 = 2*((x1-x2)*(y1-y3)-(y1-y2)*(x1-x3));
        A = x1*x1-x2*x2+y1*y1-y2*y2;
        B = x1*x1-x3*x3+y1*y1-y3*y3;
        X = ((y1-y3)*A-(y1-y2)*B)/det2;
        Y = ((x1-x2)*B-(x1-x3)*A)/det2;
        R = sqrt((X-x1)*(X-x1)+(Y-y1)*(Y-y1));
        printf("%.3lf %.3lf %.3lf\n", 
                X, Y, R);
    }
    return 0;
}