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

P placeOfLand(int bd[12][12]) {
    REP(i,12) {
        REP(j,12) {
            if (bd[i][j]) return make_pair(i, j);
        }
    }
    return NOT_FOUND;
}

bool island(int x, int y, int bd[12][12]) {
    return 0<=x && x<12 && 0<=y && y<12 && bd[x][y];
}

void solve68(string s) {
    int bd[12][12];
    REP(i,12) bd[0][i] = s[i]-'0';
    REP(j,11) {
        REP(i,12) {
            char k;
            cin >> k;
            bd[j+1][i] = k-'0';
        }
    }
    int cnt = 0;
    while (placeOfLand(bd) != NOT_FOUND) {
        cnt++;
        queue<P> que;
        que.push(placeOfLand(bd));
        while (que.size()) {
            P land = que.front();
            que.pop();
            int x = land.first, y = land.second;
            bd[x][y] = 0;
            if (island(x,y-1,bd)) {
                que.push(make_pair(x, y-1));
            }
            if (island(x,y+1,bd)) {
                que.push(make_pair(x, y+1));
            }
            if (island(x-1,y,bd)) {
                que.push(make_pair(x-1, y));
            }
            if (island(x+1,y,bd)) {
                que.push(make_pair(x+1, y));
            }
        }
    }
    cout << cnt << endl;
}

int main() {
    string s;
    while(cin >> s) {
        solve68(s);
    }
    return 0;
}