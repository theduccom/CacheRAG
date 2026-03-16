#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main( void )
{
    int n, m;
    while ( cin >> n >> m && n && m ) {
        vector <int> p(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> p[i];
        }

        int answer = 0;
        sort( p.rbegin(), p.rend() );
        for ( int i = 0, j = 1; i < n; i++, j++ ) {
            if ( j < m ) {
                answer += p[i];
            } else {
                j = 0;
            }
        }

        cout << answer << endl;
    }
    return 0;
}