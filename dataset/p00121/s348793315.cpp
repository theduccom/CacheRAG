#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <queue>
using namespace std;

vector<int> init = {0, 1, 2, 3, 4, 5, 6, 7};
vector<vector<int>> adj = {
    {1, 4},
    {0, 2, 5},
    {1, 3, 6},
    {2, 7},
    {0, 5},
    {1, 4, 6},
    {2, 5, 7},
    {3, 6}
};

map<vector<int>, int> d;

int solve(vector<int> init, vector<int> goal) {
    if (d.find(goal) != d.end()) {
        return d[goal];
    }
    d.clear();
    d[init] = 0;
    queue<vector<int>> q;
    q.push(init);
    while ( ! q.empty()) {
        vector<int> v = q.front();
        q.pop();
        int step = d[v];
        if (v == goal) return step;
        for (int i=0; i<8; ++i) {
            if (v[i] == 0) {
                for (int j=0; j<(int)adj[i].size(); ++j) {
                    swap(v[i], v[adj[i][j]]);
                    if (d.find(v) == d.end()) {
                        q.push(v);
                        d[v] = step + 1;
                    }
                    swap(v[i], v[adj[i][j]]);
                }
            }
        }
    }
    return -1;
}

int main() {
    vector<int> v(8);
    while (1) {
        for (int i=0; i<8; ++i) {
            if (cin >> v[i]) { } else { return 0; }
        }
        cout << solve(init, v) << endl;
    }
    return 0;
}