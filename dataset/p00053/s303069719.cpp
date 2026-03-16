#include <cstdio>
#include <vector>

using namespace std;

vector< bool > prime( 10000001, 1 );

signed main()
{
    prime[0] = prime[1] = 0;
    for( int i = 2; i * i < 10000001; i++ )
    {
        if( prime[i] )
        {
            for( int j = 1; i * ( j + 1 ) < 10000001; j++ )
            {
                prime[i * ( j + 1 )] = 0;
            }
        }
    }

    int n;
    while( scanf( "%d\n", &n ) != EOF )
    {
        if( n == 0 ) break;
        int sum = 0, cnt = 0;
        for( int i = 0; cnt < n; i++ )
        {
            if( prime[i] )
            {
                sum += i;
                cnt++;
            }
        }
        printf( "%d\n", sum );
    }
    return 0;
}
