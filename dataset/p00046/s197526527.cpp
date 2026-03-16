#include <cstdio>

using namespace std;

double max = 0, min = 1000000000;

signed main()
{
    double index;
    while( scanf( "%lf\n", &index ) != EOF )
    {
        if( max < index ) 
        {
            max = index;
        }
        if( index < min )
        {
            min = index;
        }
    }

    printf( "%.1lf\n", max - min );
    return 0;
}
