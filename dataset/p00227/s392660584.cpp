#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m && n) {
        vector<int> p(n);
        for (int i=0; i<n; ++i) {
            cin >> p[i];
        }
        sort(p.begin(), p.end());
        
        int res = accumulate(p.begin(), p.end(), 0);
        for (int i=n%m; i<n; i+=m) {
            res -= p[i];
        }
        cout << res << endl;
    }
    return 0;
}
