#include <iostream>
#include <string>
#include <vector>
using namespace std;

int num(string&, int&);
int fact(string&, int&);
int mul(string&, int&);
int expr(string&, int&);

int num(string &s, int &k) {
    int ret = 0;
    while ('0' <= s[k] && s[k] <= '9') {
        ret *= 10;
        ret += s[k] - '0';
        k ++;
    }
    return ret;
}

int fact(string &s, int &k) {
    int ret;
    if (s[k] == '(') {
        ret = expr(s, ++k);
        k ++;
    } else if (s[k] == '-') {
        ret = -num(s, ++k);
    } else if (s[k] == '+') {
        ret = num(s, ++k);
    } else {
        ret = num(s, k);
    }
    return ret;
}

int mul(string &s, int &k) {
    int ret = fact(s, k);
    while (1) {
        if (s[k] == '*') {
            ret *= fact(s, ++k);
        } else if (s[k] == '/') {
            ret /= fact(s, ++k);
        } else {
            break;
        }
    }
    return ret;
}

int expr(string &s, int &k) {
    int ret = mul(s, k);
    while (1) {
        if (s[k] == '+') {
            ret += mul(s, ++k);
        } else if (s[k] == '-') {
            ret -= mul(s, ++k);
        } else {
            break;
        }
    }
    return ret;
}

int main() {
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        int pos = 0;
        cout << expr(s, pos) << endl;
    }
    return 0;
}