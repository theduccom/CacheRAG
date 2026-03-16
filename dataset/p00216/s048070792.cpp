#include <iostream>
#include <algorithm>
using namespace std;

int main( void )
{
    const int base = 4280;
    int w, t;

    while ( cin >> w && w >= 0 )
    {
        int pay = 1150;
        w = max( w - 10, 0 );

        if ( w > 0 )
        {
            t = w > 9 ? 10 : w;
            pay += t * 125;
            w = max( w - t, 0 );
        }

        if ( w > 0 )
        {
            t = w > 9 ? 10 : w;
            pay += t * 140;
            w = max( w - t, 0 );
        }

        if ( w > 0 )
        {
            pay += w * 160;
            w = 0;
        }
        
        cout << base - pay << endl;
    }

    return 0;
}