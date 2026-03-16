#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<int> p(n);
        for (int i=0; i<n; ++i) {
            cin >> p[i];
        }
        sort(p.begin(), p.end(), greater<int>());

        int sum = 0, minus = 0;
        for (int i=0; i<(int)p.size(); ++i) {
            sum += p[i];
            if ((i + 1) % m == 0) minus += p[i];
        }
        cout << sum - minus << endl;
    }
    return 0;
}