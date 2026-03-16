#include <bits/stdc++.h>

using namespace std;

void f(string &s)
{
    for (char &c : s) {
        if ('a' <= c && c <= 'z') c = (c - 'a' + 25) % 26 + 'a';
    }
}

int main()
{
    string s;

    while (getline(cin, s)) {
        if (s == "") break;
        while (s.find("the") == string::npos && s.find("this") == string::npos && s.find("that") == string::npos) f(s);
        cout << s << endl;
    }
}