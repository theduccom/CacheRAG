#include <cstdio>
#include <algorithm>
#include <functional>
#include <cmath>
#include <utility>

using namespace std;

double d,w,h,r[10000];

int main()
{
    while( 1 )
    {
        scanf( "%lf %lf %lf\n", &d, &w, &h );
        if( d == 0 && w == 0 && h == 0 ) break;
        if( d > w )
        {
            swap( d, w );
        }
        if( w > h )
        {
            swap( w, h );
        }
        if( d > w )
        {
            swap( d, w );
        }
        double mini = sqrt( d * d + w * w ) / 2;
        int n;
        scanf( "%d\n", &n );
        for( int i = 0; i <n; i++ )
        {
            scanf( "%lf\n", &r[i] );
            if( mini < r[i] )
            {
                printf( "OK\n" );
            }
            else
            {
                printf( "NA\n" );
            }
        }      
    }
    return 0;
}
