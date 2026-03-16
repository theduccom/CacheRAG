#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>

using namespace std;
typedef string::const_iterator iter;

int expr(iter &p);
int term(iter& p);
int factor(iter& p);
int number(iter& p);

int expr(iter& p) {
    int r = term(p);
    while(true) {
        if(*p == '+') {
            ++p;
            int rs = term(p);
            r += rs;
        }
        else if(*p == '-') {
            ++p;
            int rs = term(p);
            r -= rs;
        }
        else {
            break;
        }
    }
    return r;
}

int term(iter& p) {
    int r = factor(p);
    while(true) {
        if(*p == '*') {
            p++;
            int rs = factor(p);
            r *= rs;
        }
        else if(*p == '/') {
            p++;
            int rs = factor(p);
            r /= rs;
        }
        else {
            break;
        }
    }
    return r;
}

int factor(iter& p) {
    if(*p == '(') {
        ++p; // skip (
        int r = expr(p);
        ++p; // skip )
        return r;
    }
    
    return number(p);
}

int number(iter& p) {
    int r = 0;
    while(isdigit(*p)) {
        r *= 10;
        r += *p -'0';
        p++;
    }
    return r;
}

int main() {
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        iter it = s.begin();
        int res = expr(it);
        cout << res << endl;
    }
}