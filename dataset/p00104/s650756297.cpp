#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cctype>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <sstream>
#include <deque>

#define REP(i, n) for ( int i = 0; i < n; i++ )

using namespace std;

void dump(vector<string> f, int x = -1, int y = -1) {
    REP(i, f.size()) {
        REP(j, f[i].size()) {
            if ( i == y && j == x )
                cout << "#";
            else
                cout << f[i][j];
        }
        cout << endl;
    }
}

/*
0:上
1:右
2:下
3:左
*/
int mx[] = {0, 1, 0, -1},
    my[] = {-1, 0, 1, 0};

vector< vector<int> > closed;

void go(vector<string> &f, int x, int y) {
    // dump(f, x, y);
    // cout << endl;

    int mv;
    if ( closed[y][x] ) {
        cout << "LOOP" << endl;
        return;
    }
    closed[y][x] = 1;

    switch(f[y][x]) {
        case '.':
            cout << x << " " << y << endl;
            return;
        case '^':
            mv = 0;
            break;
        case '>':
            mv = 1;
            break;
        case 'v':
            mv = 2;
            break;
        case '<':
            mv = 3;
            break;
    }
    go(f, x+mx[mv], y+my[mv]);
}

int main() {
    int w, h;

    while( cin >> h >> w, w || h ) {
        vector<string> f(h);
        closed = vector< vector<int> >(h, vector<int>(w, 0));

        REP(i, h) {
            REP(j, w) {
                closed[i][j] = 0;
            }
        }

        REP(i, h) {
            cin >> f[i];
        }

        go(f, 0, 0);
    }

    return 0;
}