#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double a, b, c, A, B, C, s;
        a = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
        b = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
        c = sqrt(((x1 - x3) * (x1 - x3)) + ((y1 - y3) * (y1 - y3)));
        A = a * a;
        B = b * b;
        C = c * c;
        s = (2 * ((A * B) + (B * C) + (C * A))) - ((A * A) + (B * B) + (C * C));
        double px, py, r;
        px = ((x3 * (A * (B + C - A))) / s) + ((x1 * (B * (C + A - B))) / s) + ((x2 * (C * (A + B - C))) / s);
        py = ((y3 * (A * (B + C - A))) / s) + ((y1 * (B * (C + A - B))) / s) + ((y2 * (C * (A + B - C))) / s);
        r = (a * b * c) / sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c));
        printf("%.3f %.3f %.3f\n", px, py, r);
    }
}

