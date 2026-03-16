#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        string ans = "";
        for (int i=0; i<(int)s.size(); ++i) {
            if (s[i] == '@') {
                for (int j=s[i+1]-'0'; j>0; --j) {
                    ans += s[i+2];
                }
                i += 2;
            } else {
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
}