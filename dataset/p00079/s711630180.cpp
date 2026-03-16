#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double x[3], y[3], sum = 0;
    scanf("%lf,%lf", &x[0], &y[0]);
    scanf("%lf,%lf", &x[1], &y[1]);
    while (scanf("%lf,%lf", &x[2], &y[2]) != EOF) {
        double side[3];
        for (int i = 0; i < 3; i++) {
            side[i] = sqrt(pow(x[i] - x[(i + 1) % 3], 2) + pow(y[i] - y[(i + 1) % 3], 2));
        }
        double z = (side[0] + side[1] + side[2]) / 2;
        sum += sqrt(z * (z - side[0]) * (z - side[1]) * (z - side[2]));
        x[1] = x[2];
        y[1] = y[2];
    }
    printf("%.6f\n", sum);
}