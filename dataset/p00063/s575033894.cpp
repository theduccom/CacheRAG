#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int ans = 0;
    string s, r;
    while (cin >> s) {
        r = s;
        reverse(r.begin(), r.end());
        if (s == r) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}