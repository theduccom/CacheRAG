#include <iostream>
#include <array>
#include <string>

using namespace std;

void fire( array<array<bool, 8>, 8>& f, int i, int j )
{
    if ( i < 0 || j < 0 || i >= 8 || j >= 8 )
        return;

    if ( f[i][j] ) {
        f[i][j] = false;

        for( int ii=-3; ii<=3; ++ii )
            if ( ii != 0 )
                fire( f, i + ii, j );

         for( int jj=-3; jj<=3; ++jj )
            if ( jj != 0 )
                fire( f, i, j + jj );           
    }
}

int main()
{
    int n;
    cin >> n;
    for( int iii=0; iii<n; ++iii ) {
        array<array<bool, 8>, 8> f;
        for( int i=0; i<8; ++i ) {
            string s;
            cin >> s;
            for( int j=0; j<8; ++j )
                f[i][j] = s[j] == '1';
        }
        int x, y;
        cin >> x >> y;
        fire( f, y-1, x-1 );

        cout << "Data " << iii+1 << ":" << endl;
        for( int i=0; i<8; ++i ) {
            for( int j=0; j<8; ++j ) 
                cout << f[i][j];
            cout << endl;
        }
    }
}