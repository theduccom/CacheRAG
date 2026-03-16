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
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

void solve105(int H, int W) {
    vector<vector<int>> visited(H, vector<int>(W,0));
    vector<vector<char>> floor(H, vector<char>(W,0));
    string s;
    REP(i,H) {
        cin >> s;
        REP(j,W) {
            floor[i][j] = s[j];
        }
    }
    int x = 0; int y = 0;
    while (floor[y][x] != '.') {
        if (visited[y][x]) {
            cout << "LOOP" << endl;
            return;
        }
        visited[y][x] = 1;
        if (floor[y][x] == '>') {
            x++;
        }else if (floor[y][x] == '<') {
            x--;
        }else if (floor[y][x] == 'v') {
            y++;
        }else {
            y--;
        }
    }
    cout << x << " " << y << endl;
}

int main() {
    int H, W;
    while (cin >> H >> W, H + W) {
        solve105(H, W);
    }
}