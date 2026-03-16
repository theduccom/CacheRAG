#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    double theta;
    double x=0, y=0;
    while(1){
        int step, angle;
        scanf("%d,%d",&step, &angle);
        if(step == 0 && angle == 0) break;
        x += cos( ( 90 - theta ) * M_PI / 180 ) * step;
        y += sin( ( 90 - theta ) * M_PI / 180 ) * step;
        theta += angle;
    }
    cout << (int)x << endl << (int)y << endl;
    return 0;
}