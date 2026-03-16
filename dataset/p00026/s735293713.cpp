#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

vector<vector<int>> vv;

void ink(int x, int y) {
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        vv[x][y]++;
    }
}

void big(int x, int y) {
    ink(x-2,y);
    ink(x-1,y);
    ink(x,y);
    ink(x+1,y);
    ink(x+2,y);
    ink(x-1,y-1);
    ink(x,y-1);
    ink(x+1,y-1);
    ink(x-1,y+1);
    ink(x,y+1);
    ink(x+1,y+1);
    ink(x,y-2);
    ink(x,y+2);
}

void mid(int x, int y) {
    ink(x-1,y);
    ink(x,y);
    ink(x+1,y);
    ink(x-1,y-1);
    ink(x,y-1);
    ink(x+1,y-1);
    ink(x-1,y+1);
    ink(x,y+1);
    ink(x+1,y+1);
}

void small(int x, int y) {
    ink(x-1,y);
    ink(x,y);
    ink(x+1,y);
    ink(x,y-1);
    ink(x,y+1);
}

int countBlank() {
    int cnt = 0;
    REP(i,10) REP(j,10) if (vv[i][j] == 0) cnt++;
    return cnt;
}

int getThickest() {
    int t = 0;
    REP(i,10) REP(j,10) if (vv[i][j] > t) t = vv[i][j];
    return t;
}

int main() {
    REP(i,10) {
        vector<int> v(10,0);
        vv.push_back(v);
    }
    
    int x, y, s;
    string t;
    while(cin >> t) {
        x = t[0] - '0';
        y = t[2] - '0';
        s = t[4] - '0';
        switch (s) {
            case 1:
                small(x,y);
                break;
            case 2:
                mid(x,y);
                break;
            case 3:
                big(x,y);
                break;
                
            default:
                break;
        }
    }
    
    cout << countBlank() << endl << getThickest() << endl;
    
    return 0;
}