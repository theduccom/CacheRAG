#include <iostream>
#include <vector>
using namespace std;

void printStar( int n )
{
    if ( n == 0 ) cout << "-";
    for ( int i = 0; i < n; i++ ) cout << "*";
    cout << endl;
}

int main( void )
{
    int n, k;

    while ( cin >> n && n )
    {
        vector <int> D( 10001, 0 );
        int maxK = 0;

        for ( int i = 0; i < n; i++ )
        {
            cin >> k;
            D[k]++;
            maxK = max( maxK, k );
        }

        for ( int i = 0; i <= maxK; i++ )
        {
            printStar( D[i] );
        }
    }

    return 0;
}