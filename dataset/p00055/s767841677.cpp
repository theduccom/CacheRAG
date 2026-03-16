#include <iostream>
#include <cstdio>
using namespace std;
double calc(int r, double before) {
    if(r % 2 == 0) return((double)before / 3.0);
    else           return((double)before * 2.0);
}

int main(void) {
    double a;
    while(cin >> a) {
        double ary[10]; ary[0] = a;
        double sum = a;
        for(int r = 1; r < 10; r++) {
            ary[r] = calc(r, ary[r - 1]); sum += ary[r];
        }
        printf("%.8f\n", sum);
    }
    return(0);
}