#include <iostream>
#include <string>
#include <map>

using namespace std;
map<char, int> roman;

void init() {
    roman['I'] = 1    ;
    roman['V'] = 5    ;
    roman['X'] = 10   ;
    roman['L'] = 50   ;
    roman['C'] = 100  ;
    roman['D'] = 500  ;
    roman['M'] = 1000 ;
}

int to_alnum(const string &s) {
    int alnum = 0;

    int i;
    for (i = 0; i < s.size()-1; i++) {
        if (roman[s[i]] < roman[s[i+1]]) {
            alnum += roman[s[i+1]] - roman[s[i]];
            i++;
        } else {
            alnum += roman[s[i]];
        }
    }

    if (i != s.size()) {
        alnum += roman[s[s.size()-1]];
    }

    return alnum;
}
int main() {
    string s;
    init();
    while (cin >> s) {
        cout << to_alnum(s) << endl;
    }
    return 0;
}