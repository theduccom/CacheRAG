#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <numeric>
#include <bitset>
#include <cmath>

static const int MOD = 1000000007;
using ll = long long;
using u32 = unsigned;
using u64 = unsigned long long;
using namespace std;

template<class T> constexpr T INF = ::numeric_limits<T>::max()/32*15+208;

int main() {
    int n;
    cin >> n;
    array<array<int, 10>, 10> v{};
    for (auto &&i : v) fill(i.begin(),i.end(), -1);
    for (int _ = 0; _ < n; ++_) {
        printf("Data %d:\n", _+1);
        string s;
        for (int i = 0; i < 8; ++i) {
            cin >> s;
            for (int j = 0; j < 8; ++j) {
                v[i+1][j+1] = s[j]-'0';
            }
        }
        array<int, 4> dy{-1, 1, 0, 0}, dx{0, 0, -1, 1};
        int x, y;
        cin >> x >> y;
        queue<pair<int, int>> Q;
        Q.emplace(y, x);
        v[y][x] = 0;
        while(!Q.empty()){
            int i, j; tie(i, j) = Q.front(); Q.pop();
            for (int k = 0; k < 4; ++k) {
                for (int l = 1; l <= 3; ++l) {
                    if(v[i+l*dy[k]][j+l*dx[k]] == -1) break;
                    if(v[i+l*dy[k]][j+l*dx[k]] == 1){
                        v[i+l*dy[k]][j+l*dx[k]] = 0;
                        Q.emplace(i+l*dy[k], j+l*dx[k]);
                    }
                }
            }
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                cout << v[i+1][j+1];
            }
            puts("");
        }
    }
    return 0;
}
