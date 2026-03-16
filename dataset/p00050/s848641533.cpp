#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for (int i=0; i<(int)s.size(); ) {
        if (s.substr(i, 5) == "apple") {
            cout << "peach";
            i += 5;
        } else if (s.substr(i, 5) == "peach") {
            cout << "apple";
            i += 5;
        } else {
            cout << s[i];
            i ++;
        }
    }
    cout << endl;
    return 0;
}