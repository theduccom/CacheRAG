#include <cstdio>

using namespace std;

double a[10];

int main()
{
    while( scanf( "%lf\n", &a[0] ) != EOF )
    {
        for( int i = 1; i < 10; i++ )
        {
            if( i % 2 )
            {
                a[i] = a[i - 1] * 2.0;
            }
            else
            {
                a[i] = a[i - 1] / 3.0;
            }
        }
        
        for( int i = 0; i < 10; i++ )
        {
            a[i] += ( i == 0 ? 0 : a[i - 1] );
        }
        printf( "%.8lf\n", a[9] );
    }
    return 0;
}
