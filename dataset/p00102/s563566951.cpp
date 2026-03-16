#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;

    while( cin >> n )
    {
        if( n == 0 )
            break;

        int m[n+1][n+1];
        for( int i = 0; i < n + 1; i++ )
            for( int j = 0; j < n + 1; j++ )
                m[i][j] = 0;

        for( int i = 0; i < n; i++ )
            for( int j = 0; j < n; j++ )
                cin >> m[i][j];

        for( int i = 0; i < n; i++ )
        {
            int line = 0;
            for( int j = 0; j < n; j++ )
                line += m[i][j];
            m[i][n] = line;
            m[n][n] += m[i][n];
        }

        for( int i = 0; i < n; i++ )
        {
            int row = 0;
            for( int j = 0; j < n; j++ )
                row += m[j][i];
            m[n][i] = row;
        }

        for( int i = 0; i < n + 1; i++ )
        {
            for( int j = 0; j < n + 1; j++ )
                cout << setw(5) << m[i][j];
            cout << endl;
        }
    }    

    return 0;
}
