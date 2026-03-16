#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s, s2 = "";
    getline(cin, s);
    for (int i=0; i<(int)s.size(); ++i) {
        s2 += islower(s[i]) ? toupper(s[i]) : s[i];
    }
    cout << s2 << endl;
    return 0;
}