#include <iostream>
#include <string>
using namespace std;

void replace(string& str) {
    for (int i = 0; i < (int)str.length() - 4; i++) {
        string sub = str.substr(i, 5);
        if (sub == "apple") {
            str.replace(i, 5, "peach");
            i += 4;
        } else if (sub == "peach") {
            str.replace(i, 5, "apple");
            i += 4;
        }
    }
}

int main() {
    string input;
    while (getline(cin, input)) {
        replace(input);
        cout << input << endl;
    }
}