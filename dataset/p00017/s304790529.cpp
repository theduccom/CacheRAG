#include <iostream>
#include <string>
using namespace std;

void decodeOneChar(string& str) {
    for (int i = 0; i < (int)str.length(); i++) {
        if ('a' <= str[i] && str[i] < 'z') {
            str[i]++;
        } else if (str[i] == 'z') {
            str[i] = 'a';
        }
    }
}

int main() {
    string input;
    while (getline(cin, input)) {
        while (input.find("the") == string::npos && input.find("this") == string::npos && input.find("that") == string::npos) {
            decodeOneChar(input);
        }
        cout << input << endl;
    }
}