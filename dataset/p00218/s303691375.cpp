#include <iostream>
using namespace std;

bool isA( int a, int b, int c )
{
    if ( a == 100 || b == 100 || c == 100 ) return true;
    if ( ( a + b ) / 2 >= 90 || ( a + b + c ) / 3 >= 90 ) return true;
    if ( ( a + b + c ) / 3 >= 80 ) return true;
    return false;
}

bool isB( int a, int b, int c )
{
    if ( ( a + b + c ) / 3 >= 70 ) return true;
    if ( ( a + b + c ) / 3 >= 50 && ( a >= 80 || b >= 80 ) ) return true;
    return false;
}

void printClass( int a, int b, int c )
{
    if ( isA( a, b, c ) ) cout << "A" << endl;
    else if ( isB( a, b, c ) ) cout << "B" << endl;
    else cout << "C" << endl;
}

int main( void )
{
    int n;

    while ( cin >> n && n )
    {
        int a, b, c;
        for ( int i = 0; i < n; i++ )
        {
            cin >> a >> b >> c;
            printClass( a, b, c );
        }
    }

    return 0;
}