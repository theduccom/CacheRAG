#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    while(true) {
        int x, h;
        cin >> x >> h;
        if(!x && !h) break;
        printf("%.6f\n", x*x + x*2*sqrt(x*x/4.+h*h));
    }
    return 0;
}