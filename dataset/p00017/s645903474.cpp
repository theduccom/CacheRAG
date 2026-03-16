#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

void caesar_decipher(string &s, int d) {
    d %= 26;
    for (char &c: s)
        if (c >= 'a' && c <= 'z') {
            c += d;
            if (c < 'a') {
                c += 26;
            } else if (c > 'z') {
                c -= 26;
            }
        }
}

bool testcase_ends() {
    char buf[128];
    if (fgets(buf, 128, stdin) == NULL)
        return 1;

    string s(buf);

    string keywords[]={"the", "this", "that"};
    auto is_valid=[&](string &s)->bool {
        for (string &kw: keywords)
            if (s.find(kw) != string::npos)
                return true;

        return false;
    };

    for (int i=0; i<26; ++i) {
        if (is_valid(s)) break;

        caesar_decipher(s, 1);
    }

    printf("%s", s.c_str());
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}