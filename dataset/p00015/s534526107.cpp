#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string a[2];
        cin >> a[0] >> a[1];
        if (a[0].length() > 80 || a[1].length() > 80) {
            cout << "overflow" << endl;
            continue;
        }
        while (a[0].length() < a[1].length()) {
            a[0].insert(0, 1, '0');
        }
        while (a[0].length() > a[1].length()) {
            a[1].insert(0, 1, '0');
        }
        int carry = 0;
        string sum;
        string::reverse_iterator rit[2];
        for (rit[0] = a[0].rbegin(), rit[1] = a[1].rbegin(); rit[0] != a[0].rend(); rit[0]++, rit[1]++) {
            int s = *rit[0] - '0' + *rit[1] - '0' + carry;
            carry = s / 10;
            s %= 10;
            sum.insert(0, 1, s + '0');
        }
        if (carry > 0) {
            sum.insert(0, 1, carry + '0');
        }
        if (sum.length() > 80) {
            cout << "overflow" << endl;
        } else {
            cout << sum << endl;
        }
    }
}