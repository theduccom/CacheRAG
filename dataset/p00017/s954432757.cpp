#include <iostream>
#include <string>
#include <vector>

using namespace std;

string abc = "abcdefghijklmnopqrstuvwxyz";

int main() {
    string s;
    while (getline(cin, s)) {
        for (int i=0; i<26; ++i) {
            string ns = "";
            bool ok = false;
            for (int j=0; j<(int)s.size(); ++j) {
                if (s[j] == '.' || s[j] == ' ') {
                    ns += s[j];
                } else {
                    ns += abc[(s[j] - 'a' + i) % 26];
                    if (0 <= j-2 && ns.substr(j-2) == "the")  ok = true;
                    if (0 <= j-3 && ns.substr(j-3) == "this") ok = true;
                    if (0 <= j-3 && ns.substr(j-3) == "that") ok = true;
                }
            }
            if (ok) {
                cout << ns << endl;
                break;
            }
        }
    }
    return 0;
}