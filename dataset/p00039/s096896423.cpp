#include <iostream>
#include <string>

using namespace std;

int convert(char n) {
    switch (n) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}

int main(void) {
    string str;
    while (true) {
        int n = 0;
        cin >> str;
        if (cin.eof()) break;
        for (int i = 0, len = str.size(); i < len; i++) {
            int a = convert(str[i]), b = convert(str[i + 1]);
            if (a < b && i != len - 1) {
                n -= a;
            } else {
                n += a;
            }
        }
        cout << n << endl;
    }
    return 0;
}