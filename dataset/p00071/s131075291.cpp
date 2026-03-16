#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

typedef pair<int,int> P;
const P NOT_FOUND = make_pair(-1,-1);

bool isbomb(int x, int y, int bd[8][8]) {
    return 0<=x && x<8 && 0<=y && y<8 && bd[x][y];
}

void solve71(int cnt) {
    int bd[8][8];
    REP(i,8) {
        string s;
        cin >> s;
        REP(j,8) {
            bd[i][j] = s[j] - '0';
        }
    }
    // input ends
    int x,y;
    cin >> x >> y;
    P first = make_pair(y-1, x-1);
    queue<P> willExplode;
    willExplode.push(first);
    while (willExplode.size()) {
        P bomb = willExplode.front();
        willExplode.pop();
        int x,y;
        x = bomb.first, y = bomb.second;
        bd[x][y] = 0;
        if (isbomb(x-3,y,bd)) {
            willExplode.push(make_pair(x-3,y));
        }
        if (isbomb(x-2,y,bd)) {
            willExplode.push(make_pair(x-2,y));
        }
        if (isbomb(x-1,y,bd)) {
            willExplode.push(make_pair(x-1,y));
        }
        if (isbomb(x+1,y,bd)) {
            willExplode.push(make_pair(x+1,y));
        }
        if (isbomb(x+2,y,bd)) {
            willExplode.push(make_pair(x+2,y));
        }
        if (isbomb(x+3,y,bd)) {
            willExplode.push(make_pair(x+3,y));
        }
        if (isbomb(x,y-3,bd)) {
            willExplode.push(make_pair(x,y-3));
        }
        if (isbomb(x,y-2,bd)) {
            willExplode.push(make_pair(x,y-2));
        }
        if (isbomb(x,y-1,bd)) {
            willExplode.push(make_pair(x,y-1));
        }
        if (isbomb(x,y+1,bd)) {
            willExplode.push(make_pair(x,y+1));
        }
        if (isbomb(x,y+2,bd)) {
            willExplode.push(make_pair(x,y+2));
        }
        if (isbomb(x,y+3,bd)) {
            willExplode.push(make_pair(x,y+3));
        }
    }
    cout << "Data " << cnt + 1 << ":" << endl;
    REP(i,8) {
        REP(j,8) {
            cout << bd[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        solve71(i);
    }
    return 0;
}