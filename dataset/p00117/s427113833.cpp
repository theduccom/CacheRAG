#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main( void )
{
    int n, m;
    string input;
    int G[31][31];
    int C[31][31];
    for ( int i = 0; i < 31; i++ )
    {
        for ( int j = 0; j < 31; j++ )
        {
            C[i][j] = 1 << 24;
        }
    }

    cin >> n >> m;
    for ( int i = 0; i < m; i++ )
    {
        cin >> input;
        replace( input.begin(), input.end(), ',', ' ' );
        istringstream is( input );
        int a, b, c, d;
        is >> a >> b >> c >> d;
        C[a][b] = c;
        C[b][a] = d;
    }

    for ( int k = 1; k <= n; k++ ) for ( int i = 1; i <= n; i++ ) for ( int j = 1; j <= n; j++ )
    {
        C[i][j] = min( C[i][j], C[i][k] + C[k][j] );
    }

    int x1, x2, y1, y2;
    cin >> input;
    replace( input.begin(), input.end(), ',', ' ' );
    istringstream is( input );
    is >> x1 >> x2 >> y1 >> y2;
    cout << y1 - y2 - C[x1][x2] - C[x2][x1] << endl;

    return 0;
}