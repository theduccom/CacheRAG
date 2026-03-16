#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
using namespace std;

double PI = 3.141592;

int main(void) {

    double x = 0;
    double y = 0;
    double r = 0;
    double a = 90;
    double d = 0;
    while(true){

        scanf("%lf,%lf", &r, &d);
        if( r == 0 && d == 0 ) break;

        x += r * cos( a * PI / 180 );
        y += r * sin( a * PI / 180 );
        // cerr << x << " " << y << endl;
        a -= d;
    }
    cout << (int)x << endl << (int)y << endl;


    return 0;
}