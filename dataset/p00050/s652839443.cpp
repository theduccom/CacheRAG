#include <iostream>
#include <string>

using namespace std;

void replace(string& str, const string& from, const string& to);

int main()
{
    string str;
    getline(cin, str);

    replace(str, "apple", "xxxxx");
    replace(str, "peach", "apple");
    replace(str, "xxxxx", "peach");

    cout << str << endl;
}

void replace(string& str, const string& from, const string& to)
{
    string::size_type pos = 0;
    while ((pos = str.find(from, pos)) != string::npos) {
        str.replace(pos, from.size(), to);
    }
}