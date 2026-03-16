#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

string kind = "ABCDEFG";

vector<vector<pair<int,int>>> fig = {
    {{ 1, 0}, { 0, 1}, { 1, 1}}, //A
    {{ 0, 1}, { 0, 2}, { 0, 3}}, //B
    {{ 1, 0}, { 2, 0}, { 3, 0}}, //C
    {{-1, 1}, { 0, 1}, {-1, 2}}, //D
    {{ 1, 0}, { 1, 1}, { 2, 1}}, //E
    {{ 0, 1}, { 1, 1}, { 1, 2}}, //F
    {{ 1, 0}, {-1, 1}, { 0, 1}}  //G
};

int main() {
    int v[8][8];
    while (1) {
        char c;
        rep(i,8) rep(j,8) {
            if ( ! (cin >> c)) return 0;
            v[i][j] = c - '0';
        }
        rep(i,8) rep(j,8) {
            if ( ! v[i][j]) continue;
            rep(k,(int)fig.size()) {
                bool ok = true;
                for (auto p : fig[k]) {
                    int x = j + p.first;
                    int y = i + p.second;
                    if (x < 0 || 8 <= x || y < 0 || 8 <= y || ! v[y][x]) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    cout << kind[k] << endl;
                }
            }
        }
    }
    return 0;
}