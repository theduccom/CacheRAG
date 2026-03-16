#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <climits>
#include <algorithm>
#include <map>

using namespace std;

typedef long long ll;

int main() {
    int n;
    while (cin >> n, n) {
        vector<int> ids;
        map<int, ll> sales;
        int i;
        ll p, q;
        for (int k=0; k<n; ++k) {
            cin >> i >> p >> q;
            if ( ! sales.count(i)) ids.push_back(i);
            sales[i] += p * q;
        }
        bool na = true;
        for (int k=0; k<(int)ids.size(); ++k) {
            if (1000000 <= sales[ids[k]]) {
                cout << ids[k] << endl;
                na = false;
            }
        }
        if (na) cout << "NA" << endl;
    }
}