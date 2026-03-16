#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    double x, h;

    while( cin >> x >> h )
    {
        if( x == 0 && h == 0 )
            break;
        
        //側面積=0.5*x*t, t = root(h^2+0.25x^2), 余弦
        double s = 0;
        s = 2 * x * sqrt( h * h + 0.25 * x * x ) + x * x;

        cout << fixed << setprecision(8) << s << endl;
    }
    return 0;
}
