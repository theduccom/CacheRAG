#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

#define N_MAX 1000

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        int ps[N_MAX];
        for (int i = 0; i < n; i++) {
            cin >> ps[i];
        }
        sort(ps, ps+n, greater<int>());
        for (int i = m-1; i < n; i += m) {
            ps[i] = 0;
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ps[i];
        }
        cout << sum << endl;
    }
    return 0;
}