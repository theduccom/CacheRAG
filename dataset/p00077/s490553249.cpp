#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '@') {
                for (int j = 0; j < s[i+1] - '0'; j++) {
                    putchar(s[i+2]);
                }
                i+=2;
            } else {
                putchar(s[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}