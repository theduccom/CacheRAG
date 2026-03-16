#include <bits/stdc++.h>

using namespace std;

bool is_finish(string s)
{
    string str;
    stringstream ss(s);
    while (ss >> str) {
        if (str == "the" ||
            str == "this" ||
            str == "that") return 1;
    }
    return 0;
}

int main()
{
    string s;
    while (getline(cin, s)) {
        s.pop_back();
        for (int i = 0; i < 26; i++) {
            for (char &c: s) {
                if (islower(c)) {
                    c = c + 1;
                    if (c > 'z') c = 'a';
                }
            }
            if (is_finish(s)) {
                break;
            }
        }
        cout << s << "." << endl;
    }
    return 0;
}