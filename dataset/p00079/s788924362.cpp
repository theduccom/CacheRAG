#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double getDistance( double x1, double y1, double x2, double y2 )
{
    return sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) );
}

double calcASurfaceArea( double a, double b, double c )
{
    double z = ( a + b + c ) / 2;
    return sqrt( z * ( z - a ) * ( z - b ) * ( z - c ) );
}

int main()
{
    int n = 0;
    char p;

    double x[20];
    double y[20];

    int i = 0;
    while( cin >> x[i] >> p >> y[i] )
    {
        i++;
        n++;
    }

    int tri = 0, j = 0;
    double sa = 0;
    while( tri != n - 2 )
    {
        int j1 = 0, j2 = j + 1, j3 = j + 2;
        //cout << "j1: " << j1 << " j2: " << j2 << " j3: " << j3 << endl;
        sa += calcASurfaceArea( getDistance( x[j1], y[j1], x[j2], y[j2] ), getDistance( x[j2], y[j2], x[j3], y[j3] ), getDistance( x[j1], y[j1], x[j3], y[j3] ) );
        j++;
        tri++;
        //cout << sa << endl;
    }

    cout << fixed << setprecision(8) << sa << endl;

    return 0;
}
