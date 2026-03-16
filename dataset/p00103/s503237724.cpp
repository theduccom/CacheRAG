#include <cstdio>

using namespace std;

int main()
{
    char s[30];
    int n, point, runner, out;
    scanf( "%d\n", &n );
    for( int i = 0; i < n; i++ )
    {
        point = 0, runner = 0, out = 0;
        while( out < 3 )
        {
            scanf( "%s\n", s );

            switch( s[1] )
            {
                case 'I':
                    runner++;
                    if( runner == 4 )
                    {
                        point++;
                        runner = 3;
                    }
                    break;
                case 'O':
                    point += runner + 1;
                    runner = 0;
                    break;
                case 'U':
                    out++;
                    break;
            }
        }
        printf( "%d\n", point );
    }
    return 0;
}

