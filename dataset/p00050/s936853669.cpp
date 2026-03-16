#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[])
{
    string str;
    while (getline(cin, str)) {
        for (int i = 0; i < str.length() - 4; i++) {
            string stuck = str.substr(i, 5);
            if (stuck.find("apple") != string::npos) {
                str[i] = 'p';
                str[i + 1] = 'e';
                str[i + 2] = 'a';
                str[i + 3] = 'c';
                str[i + 4] = 'h';
                i += 4;
            }
            else if (stuck.find("peach") != string::npos) {
                str[i] = 'a';
                str[i + 1] = 'p';
                str[i + 2] = 'p';
                str[i + 3] = 'l';
                str[i + 4] = 'e';
                i += 4;
            }
        }
        cout << str << endl;
    }
    return 0;
}