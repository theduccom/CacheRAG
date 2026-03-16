#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

bool testcase_ends() {
    char buf[128];
    if (scanf("%s", buf) == EOF)
        return 1;

    string s(buf);
    scanf("%s", buf);
    string t(buf);

    if (s.length() > 80 || t.length() > 80)
        return !printf("overflow\n");

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    if (s.length() > t.length()) {
        t += string(s.length()-t.length(), '0');
    } else if (s.length() < t.length()) {
        s += string(t.length()-s.length(), '0');
    }

    string u;
    int carry=0;
    for (size_t i=0; i<s.length(); ++i) {
        u.push_back(s[i]+t[i]+carry-'0');
        if (u.back() > '9') {
            carry = 1;
            u.back() -= 10;
        } else {
            carry = 0;
        }
    }
    if (carry)
        u.push_back('1');

    if (u.length() > 80)
        return !printf("overflow\n");

    reverse(u.begin(), u.end());
    printf("%s\n", u.c_str());
    return 0;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    for (size_t i=0; i<n; ++i)
        if (testcase_ends())
            return 1;

    return 0;
}