#include <iostream>
using namespace std;

bool is_leap(int n) {
    if (n % 400 == 0) {
        return true;
    } else if (n % 100 == 0) {
        return false;
    } else if (n % 4 == 0) {
        return true;
    }
    return false;
}

void solve(int b, int e) {
    bool leap_exist = false;
    for (int i = b; i <= e; i++) {
        if (is_leap(i)) {
            leap_exist = true;
            cout << i << endl;
        } 
    }
    if (!leap_exist) {
        cout << "NA" << endl;
    }
}

int main() {
    int b, e;
    if (cin >> b >> e) {
        if (b == 0 && e == 0) return 0;
        solve(b, e);
    }
    while (cin >> b >> e) {
        if (b == 0 && e == 0) break;
        cout << endl;
        solve(b, e);
    }
    return 0;
}