#include <iostream>
#include <vector>
using namespace std;

int main( void )
{
    int n;

    while ( cin >> n && n != 0 )
    {
        vector <int> I( n, 0 );
        vector <int> L( n, 0 );

        for ( int i = 0; i < n; i++ )
        {
            int p, d1, d2;
            cin >> p >> d1 >> d2;
            I[i] = p;
            L[i] = d1 + d2;
        }

        int maxNo = -1;
        int maxL = 0;
        for ( int i = 0; i < n; i++ )
        {
            if ( i == 0 )
            {
                maxNo   = I[i];
                maxL    = L[i];
            }
            else if ( L[i] > maxL )
            {
                maxNo   = I[i];
                maxL    = L[i];
            }
        }

        cout << maxNo << " " << maxL << endl;
    }

    return 0;
}