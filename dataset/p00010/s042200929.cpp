#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double p = ((y1 - y3)*(pow(y1, 2) - pow(y2, 2) + pow(x1, 2) - pow(x2, 2)) - (y1 - y2)*(pow(y1, 2) - pow(y3, 2) + pow(x1, 2) - pow(x3, 2))) / (2 * (y1 - y3)*(x1 - x2) - 2 * (y1 - y2)*(x1 - x3));
        double q = ((x1 - x3)*(pow(x1, 2) - pow(x2, 2) + pow(y1, 2) - pow(y2, 2)) - (x1 - x2)*(pow(x1, 2) - pow(x3, 2) + pow(y1, 2) - pow(y3, 2))) / (2 * (x1 - x3)*(y1 - y2) - 2 * (x1 - x2)*(y1 - y3));
        double r = pow((pow((x1 - p), 2) + pow((y1 - q), 2)), 0.5);

        printf("%.3f %.3f %.3f\n", p, q, r);
    }

    return 0;
}