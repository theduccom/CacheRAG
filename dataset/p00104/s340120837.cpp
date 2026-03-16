#include<iostream>
using namespace std;

int main()
{
    int h, w;
    char m[100][100];
    bool b[100][100];

    while( cin >> h >> w )
    {
        if( h == 0 && w == 0 )
            break;

        for( int i = 0; i < h; i++ )
            for( int j = 0; j < w; j++ )
            {
                m[i][j] = '.';
                b[i][j] = false;
            }
        for( int i = 0; i < h; i++ )
            for( int j = 0; j < w; j++ )
                cin >> m[i][j];

        int i = 0, j = 0;
        while( m[i][j] != '.' && b[i][j] != true )
        {
            b[i][j] = true;
            if( m[i][j] == '>' )
                j++;
            else if( m[i][j] == '<' )
                j--;
            else if( m[i][j] == '^' )
                i--;
            else if( m[i][j] == 'v' )
                i++;
            else;
        }
        if( b[i][j] == false )
            cout << j << " " << i << endl;
        else
            cout << "LOOP" << endl;
    }    

    return 0;
}
