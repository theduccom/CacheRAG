#include <iostream>
#include <string>
#include <array>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    array<pair<int, int> const, 4> const p[7] ={
        {{{0,0}, {1,0}, {0,1}, {1,1}}},
        {{{0,0}, {0,1}, {0,2}, {0,3}}},
        {{{0,0}, {1,0}, {2,0}, {3,0}}},
        {{{0,0}, {-1,1}, {0,1}, {-1,2}}},
        {{{0,0}, {1,0}, {1,1}, {2,1}}},
        {{{0,0}, {0,1}, {1,1}, {1,2}}},
        {{{0,0}, {1,0}, {-1,1}, {0,1}}},
    };

    string e;
    do {
        bool b[20][20] = {};
        int fx = -1, fy = -1;
        for( int y=4; y<8+4; ++y ) {
            for( int x=4; x<8+4; ++x ) {
                char c;
                cin >> c;
                b[x][y] = c == '1';
                if ( b[x][y] && fx == -1 && fy == -1) {
                    fx = x;
                    fy = y;
                }
            }
        }

        for( int i=0; i<7; ++i ) {
            if ( b[fx+p[i][0].first][fy+p[i][0].second]
                 && b[fx+p[i][1].first][fy+p[i][1].second]
                 && b[fx+p[i][2].first][fy+p[i][2].second]
                 && b[fx+p[i][3].first][fy+p[i][3].second]
                ) {
                cout << static_cast<char>( 'A' + i ) << endl;
                break;
            }
        }

    } while( getline( cin, e ) );
}