#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int h;
    double result;

    while(cin >> x >> h, x != 0 && x != 0){
        result = x*x + 2*x*sqrt((x/2.0)*(x/2.0)+h*h);
        printf("%.6lf\n", result);
    }
    return 0;
}