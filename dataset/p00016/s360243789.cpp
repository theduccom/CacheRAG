#include <stdio.h>
#include <cmath>

using namespace std;

int steps[999999] = {0};
int degree[999999] = {0};

double toRadian(int d) {
    const double ONE_RAD = 180.0d / M_PI;
    return ((double) d) / ONE_RAD;
}

int main() {
    double x = 0.0d;
    double y = 0.0d;
    double rot = M_PI / 2.0d;
    int counts = 0;
    while (true) {
        scanf("%d,%d", &steps[counts], &degree[counts]);
        if ((steps[counts] == 0) && (degree[counts] == 0)) {
            break;
        }

        counts++;
    }

    for (int i = 0; i < counts; ++i) {
        double tempX = 0.0d;
        double tempY = 0.0d;
        tempX = (double) steps[i] * cos(rot);
        tempY = (double) steps[i] * sin(rot);
        double rad = toRadian(degree[i]);
        rot -=  rad;

        x += tempX;
        y += tempY;
    }

    int resultX = (int) x;
    int resultY = (int) y;
    printf("%d\n%d\n", resultX, resultY);

    return 0;
}