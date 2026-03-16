#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    size_t pos = 0;
    while ((pos = str.find("apple", pos)) != string::npos) {
        str.replace(pos, 5, "xxxxx");
    }

    pos = 0;
    while ((pos = str.find("peach", pos)) != string::npos) {
        str.replace(pos, 5, "apple");
    }

    pos = 0;
    while ((pos = str.find("xxxxx", pos)) != string::npos) {
        str.replace(pos, 5, "peach");
    }

    cout << str << endl;
}