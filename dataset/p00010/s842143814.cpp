#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main() {
    double x1, x2, x3, px, y1, y2, y3, py,r;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (y1 == y2) {
            px = (x1 + x2) / 2;
            py = (x1 - x3)*(x2 - x3) / (2 * (y3 - y1)) + (y1 + y3) / 2;
        }
        else if (y1 == y3) {
            px = (x1 + x3) / 2;
            py = (x1 - x2)*(x3 - x2) / (2 * (y2 - y1)) + (y1 + y2) / 2;
        }
        else {
            px = ((x1*x1 - x2*x2) / (y2 - y1) - (x1*x1 - x3*x3) / (y3 - y1) + y3 - y2) / (2 * ((x1 - x2) / (y2 - y1) - (x1 - x3) / (y3 - y1)));
            py = (px - (x1 + x2) / 2)*(x1 - x2) / (y2 - y1) + (y1 + y2) / 2;
        }
        r = sqrt((px - x1)*(px - x1) + (py - y1)*(py - y1));
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
    return 0;
}