#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
 
using namespace std;
 
int main ( void )
{
    int ix, ih;
    while (cin >> ix >> ih, ix|ih) {
        double x = ix, h = ih;
        double th = sqrt((x*x*0.25) + (h*h));
        double s = x * x + 2.0 * x * th;
        printf("%.7f\n", s);
    }
    return 0;
}