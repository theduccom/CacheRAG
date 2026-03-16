#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int x, h;
    while( cin >> x >> h ) {
        if ( x == 0 && h == 0 )
            break;

        auto const v = x * sqrt( 4 * h * h + x * x ) + x * x;
        cout << setprecision( 6 ) << fixed << v << endl;
    }
}