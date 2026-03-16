#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int cnt = 0;
    string s;
    while (cin >> s) {
        int n = s.size();
        bool ok = true;
        for (int i=0; i<n-i; ++i) {
            if (s[i] != s[n-1-i]) {
                ok = false;
                break;
            }
        }
        cnt += ok;
    }
    cout << cnt << endl;
    return 0;
}