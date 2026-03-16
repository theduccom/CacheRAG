#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p[1000], n, m, i, total;

    while (cin) {
        cin >> n >> m;
        if (!n && !m) break;

        for (i = 0; i < n; i++) {
            cin >> p[i];
        }
        sort(p, p+n);

        for (i = 0, total = 0; i < n%m; i++) {
            total += p[i];
        }
        for (; i < n; i++) {
            if (i%m != n%m) {
                total += p[i];
            }
        }
        cout << total << endl;
    }
    return 0;
}