#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    while (cin >> n, n) {
        vector<pair<int,int> > v;
        int p, d1, d2;
        for (int i=0; i<n; ++i) {
            cin >> p >> d1 >> d2;
            v.push_back(make_pair(-d1-d2, p));
        }
        sort(v.begin(), v.end());
        cout << v[0].second << " " << -v[0].first << endl;
    }
    return 0;
}