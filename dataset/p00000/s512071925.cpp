#include <bits/stdc++.h>

using namespace std;

#define FOR(i, m, n) for(int i = m; i < n; i++)

int main() {
    FOR(i, 1, 10) FOR(j, 1, 10) {
            cout << i << "x" << j << "=" << i * j << endl;
        }
    return 0;
}