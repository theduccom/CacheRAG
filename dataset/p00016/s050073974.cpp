#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double x=0.0;
    double y=0.0;
    double rad = 90.0 / 180.0 * M_PI;

    while(1)
    {
        int d,a;
        scanf("%d,%d", &d, &a);
        if(d==0 && a==0)
        {
            break;
        }
        x += d * cos(rad);
        y += d * sin(rad);
        rad -= a /180.0 * M_PI; 
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}