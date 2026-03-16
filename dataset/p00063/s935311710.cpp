#include <bits/stdc++.h>

using namespace std;

int main() {

    int i, cnt = 0;
    string s;

    while(cin >> s) {

        for(i = 0; i < s.size(); ++i) {
            if(s[i] != s[s.size() - i - 1]) {
                break;
            }
        }

        if(i == s.size()) {
            ++cnt;
        }

    }

    cout << cnt << endl;

}