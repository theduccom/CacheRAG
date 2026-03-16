#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int len, keta = 0;
        string a, b, c = "";
        cin >> a >> b;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        len = max(a.size(), b.size());
        for (int i = 0, size = len - a.size(); i < size; i++) {
            a += '0';
        }
        for (int i = 0, size = len - b.size(); i < size; i++) {
            b += '0';
        }
        for (int i = 0; i < len; i++) {
            c += ((a[i] - '0') + (b[i] - '0') + keta) % 10 + '0';
            keta = ((a[i] - '0') + (b[i] - '0') + keta) / 10;
        }
        if (keta == 1) {
            c += '1';
        }
        reverse(c.begin(), c.end());
        if (c.size() > 80) {
            cout << "overflow\n";
        }
        else {
            cout << c << endl;
        }
    }
    
    return 0;
}