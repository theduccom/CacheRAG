#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

signed main()
{
    int num, a = 0, b = 0, ab = 0, o = 0;
    string type;
    while( cin >> num >> type )
    {
        if( type == ",A" )
        {
            a++;
        }
        if( type == ",B" )
        {
            b++;
        }
        if( type == ",AB" )
        {
            ab++;
        }
        if( type == ",O" )
        {
            o++;
        }
    }
    printf( "%d\n%d\n%d\n%d\n", a, b, ab, o );
    return 0;
}
