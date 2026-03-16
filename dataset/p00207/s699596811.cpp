#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;

const int size = 101;
int B[size][size];
int V[size][size];

typedef pair <int, int> PII;
typedef queue <PII> QUEUE;

int main() {
    int w, h;
    while ( cin >> w >> h && w && h ) {
        for ( int i = 0; i < h; ++ i ) {
            for ( int j = 0; j < w; ++ j ) {
                B[i][j] = 0;
                V[i][j] = 0;
            }
        }
        int xs, ys, xg, yg;
        cin >> xs >> ys >> xg >> yg;
        xs --;
        ys --;
        xg --;
        yg --;
        int n;
        cin >> n;
        for ( int i = 0; i < n; ++ i ) {
            int c, d, x, y;
            cin >> c >> d >> x >> y;
            x --;
            y --;
            for ( int j = 0; j < ( d ? 4 : 2 ); ++ j ) {
                for ( int k = 0; k < ( d ? 2 : 4 ); ++ k ) {
                    int nx = x + k;
                    int ny = y + j;
                    B[ny][nx] = c;
                }
            }
        }

//         for ( int i = 0; i < h; ++ i ) {
//             for ( int j = 0; j < w; ++ j ) {
//                 cout << B[i][j];
//             }
//             cout << endl;
//         }
//         cout << endl;

        if ( ! B[ys][xs] || ! B[yg][xg] ) {
            cout << "NG" << endl;
            continue;
        }
        
        PII start( xs, ys );
        V[ys][xs] = 1;
        QUEUE Q;
        Q.push( start );
        bool flag = true;
        while ( ! Q.empty() ) {
            PII node = Q.front();
            Q.pop();

            int x = node.first;
            int y = node.second;

            if ( x == xg && y == yg ) {
                cout << "OK" << endl;
                flag = false;
                break;
            }
            
            const int dx[4] = { 1, -1, 0, 0 };
            const int dy[4] = { 0, 0, 1, -1 };
            for ( int i = 0; i < 4; ++ i ) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if ( nx < 0 || nx >= w ) continue;
                if ( ny < 0 || ny >= h ) continue;
                if ( B[y][x] != B[ny][nx] ) continue;
                if ( V[ny][nx] ) continue;
                V[ny][nx] = 1;
                PII next( nx, ny );
                Q.push( next );
            }
        }

        if ( flag ) cout << "NG" << endl;
    }
    return 0;
}