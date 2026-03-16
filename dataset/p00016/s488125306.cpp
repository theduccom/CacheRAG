#include<iostream>
#include<math.h>
#include<stdio.h>
#define M_PI 3.14159265358979 /* ?????¨??? */

using namespace std;

int main(){
    int len, deg;
    int deg_now = 90;
    double x = 0, y = 0;

    while (1){
        scanf("%d,%d", &len, &deg);
        if (len == 0 && deg == 0) break;
        x += len*cos(deg_now* M_PI / 180);
        y += len*sin(deg_now* M_PI / 180);
        deg_now -= deg;
    }

    cout << (int)x << endl << (int)y << endl;

    return 0;

}