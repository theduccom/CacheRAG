#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        int sz = s.size();
        string ans = "";
        for (int i = 0; i < sz; i++) {
            if (s[i] != '@') ans += s[i];
            else {
                int cnt = s[++i] - '0';
                i++;
                while (cnt--) ans += s[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
