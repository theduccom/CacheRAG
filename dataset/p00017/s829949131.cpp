#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

char caesar(int n, char c) {
    int zure = c + n - 'a';
    if (zure < 26) return (char)(c + zure);
    else return (char)('a' + (zure % 26));
}

int main(void) {
    string s, strCopy;
    while (getline(cin, s)) {
        for (int j = 0; j < 26; j++) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] >= 'a' && s[i] <= 'z') {
                    s[i] = (s[i] == 'z') ? 'a' : s[i]+1;
                }
            }
            if (s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos) {
                cout << s << endl;
            }
        }
    }
    return 0;
}