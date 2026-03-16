#include <iostream>
#include <algorithm>
using namespace std;

int x[3];
void solve() {
    int n;
    cin >> n;
    int rs[n];
    for (int i = 0; i < n; i++) {
        cin >> rs[i];
    }

    sort(x, x+3);
    int diag_pow_2 = x[0] * x[0] + x[1] * x[1];

    for (int i = 0; i < n; i++) {
        if ( (rs[i] * 2) * (rs[i] * 2) > diag_pow_2) 
            cout << "OK" << endl;
        else 
            cout << "NA" << endl;
    }
}

int main() {
    while (cin >> x[0] >> x[1] >> x[2]) {
        if (x[0] == 0) break;
        solve();
    }
    return 0;
}