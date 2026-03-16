#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double calc(int x, int h) {
    return((2.0 * x) * sqrt(h*h + (x*x) / 4.0) + x*x);
}

int main(void) {
    int x, h;
    
    while(cin >> x >> h, x||h) {
        printf("%.6f\n", calc(x, h));
    }
    return(0);
}