#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int d, r;
    double x = 0, y = 0, nr = 0;
    while( scanf("%d,%d", &d, &r), d || r ){
        double rad = nr/180*M_PI;
        x += (cos(rad)*d);
        y += (sin(rad)*d);
        nr += r;
    }
    cout << (int)y << endl;
    cout << (int)x << endl;
}