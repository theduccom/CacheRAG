#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    int n;
    string _;
    cin >> n;
    getline(cin, _);
    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s);
        regex re("Hoshino");
        auto r = regex_replace(s, re, "Hoshina");
        cout << r << endl;
    }
}