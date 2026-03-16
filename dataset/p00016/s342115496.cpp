#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tmp1;
    int tmp2;
    int radiant = 0;
    double x = 0;
    double y = 0;

    while(scanf("%d,%d", &tmp1, &tmp2), (tmp1 != 0 || tmp2 != 0)){
        x += tmp1 * sin(radiant * M_PI / 180.0);
        y += tmp1 * cos(radiant * M_PI / 180.0);
        radiant += tmp2;
    }
    cout << (int)x << endl;
    cout << (int)y << endl;
    return 0;
}