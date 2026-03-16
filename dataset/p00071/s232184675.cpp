#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000
typedef long long ll;

int field[8][8];
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                char c;
                cin >> c;
                field[j][k] = (int)(c - '0');
            }
        }
//        for (int j = 0; j < 8; j++) {
//            for (int k = 0; k < 8; k++) {
//                cout << field[j][k];
//            }
//            cout << endl;
//        }
        int sx, sy;
        cin >> sx;
        cin >> sy;
        field[sy-1][sx-1] = 0;
        cout << "Data " << i+1 << ":" << endl;
        queue<int> X;
        queue<int> Y;
        X.push(sx-1); Y.push(sy-1);
        while (!X.empty()) {
            int x = X.front(); X.pop();
            int y = Y.front(); Y.pop();
            for (int j = 0; j < 4; j++) {
                for (int k = 1; k <= 3; k++) {
                    int nx = x + k * dx[j];
                    int ny = y + k * dy[j];
                    if (0 <= nx && nx < 8 && 0 <= ny && ny < 8) {
                        if (field[ny][nx] == 1) {
                            X.push(nx); Y.push(ny);
                        }
                        field[ny][nx] = 0;
                    }
                }
            }
        }
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                cout << field[j][k];
            }
            cout << endl;
        }
    }
    return 0;
}