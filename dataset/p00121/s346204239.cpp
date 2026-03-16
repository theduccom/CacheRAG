#include <algorithm>
#include <bitset>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;

using i64 = int64_t;

const int INF = 1 << 29;

struct state {
    vector<int> pz;
    int count;
    state() {}
    state(vector<int> a, int b): pz(a), count(b) {}
};

map<vector<int>, int> conv;

void init() {
    vector<int> v({0, 1, 2, 3, 4, 5, 6, 7});
    int num = 0;
    do {
        conv[v] = num++;
    } while (next_permutation(begin(v), end(v)));
}

int puzzle[8];
int ans[40320];

void solve() {
    fill(ans, ans + 40320, INF);

    vector<int> sv({0, 1, 2, 3, 4, 5, 6, 7});

    queue<state> que;
    que.emplace(sv, 0);
    ans[conv[sv]] = 0;

    while (!que.empty()) {
        state st = que.front(); que.pop();

        vector<int> pv(st.pz);

        int zi = -1;
        for (int j = 0; j < 8; ++j) {
            if (pv[j] == 0) {
                zi = j;
                break;
            }
        }

        if (zi % 4 > 0) {
            swap(pv[zi], pv[zi-1]);
            if (st.count+1 < ans[conv[pv]]) {
                ans[conv[pv]] = st.count+1;
                que.emplace(pv, st.count+1);
            }
            swap(pv[zi], pv[zi-1]);
        }

        if (zi % 4 < 3) {
            swap(pv[zi], pv[zi+1]);
            if (st.count+1 < ans[conv[pv]]) {
                ans[conv[pv]] = st.count+1;
                que.emplace(pv, st.count+1);
            }
            swap(pv[zi], pv[zi+1]);
        }

        if (zi >= 4) {
            swap(pv[zi], pv[zi-4]);
            if (st.count+1 < ans[conv[pv]]) {
                ans[conv[pv]] = st.count+1;
                que.emplace(pv, st.count+1);
            }
            swap(pv[zi], pv[zi-4]);
        }

        if (zi < 4) {
            swap(pv[zi], pv[zi+4]);
            if (st.count+1 < ans[conv[pv]]) {
                ans[conv[pv]] = st.count+1;
                que.emplace(pv, st.count+1);
            }
            swap(pv[zi], pv[zi+4]);
        }
    }
}

int main() {
    init(); solve();
    while (cin >> puzzle[0]) {
        vector<int> vv;
        for (int j = 1; j < 8; ++j) cin >> puzzle[j];
        for (int j = 0; j < 8; ++j) vv.push_back(puzzle[j]);
        cout << ans[conv[vv]] << endl;
    }
    return 0;
}