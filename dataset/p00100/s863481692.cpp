#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<pair<int, long>> vec;
    int n;
    while (cin >> n && n > 0) {
        for (int i = 0; i < n; i++) {
            int id;
            long p, q;
            cin >> id >> p >> q;

            auto pre = find_if(
                vec.begin(), vec.end(),
                [&](const pair<int, long> &tar) { return tar.first == id; });
            if (pre != vec.end())
                pre->second += p * q;
            else
                vec.push_back(make_pair(id, p * q));
        }
        int count = 0;
        for (auto v : vec) {
            if (v.second >= 1000000) {
                cout << v.first << endl;
                count++;
            }
        }
        if (count == 0) cout << "NA" << endl;
        vec.clear();
    }
    return EXIT_SUCCESS;
}