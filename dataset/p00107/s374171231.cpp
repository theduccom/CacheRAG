#include<iostream>
#include<cmath>
using namespace std;

double min( double a, double b )
{
    if( a > b )
        return b;
    else
        return a;
}

int main()
{
    int d, w, h, n, p;

    while( cin >> d >> w >> h )
    {
        if( d == 0 && w == 0 && h == 0 )
            break;

        double a = sqrt( d * d + w * d ), b = sqrt( d * d + h * h ), c = sqrt( w * w + h * h );
        double m = min( min( a, b ), min( b, c ) ) / 2;         //外接円の半径を求め、入り口の半径の大きさと比べる。

        cin >> n;

        for( int i = 0; i < n; i++ )
        {
            cin >> p;
            if( m < p )
                cout << "OK" << endl;
            else
                cout << "NA" << endl;
        }
    }

    return 0;
}
