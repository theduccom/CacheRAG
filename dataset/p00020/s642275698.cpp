#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    char buf[256];
    fgets(buf, 256, stdin);
    string s(buf);

    auto toupper=[](char c)->char {
        if (c >= 'a' && c <= 'z')
            c &= ~0x20;

        return c;
    };

    transform(s.begin(), s.end(), s.begin(), toupper);

    printf("%s", s.c_str());
    return 0;
}