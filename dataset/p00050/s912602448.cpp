#include <iostream>
#include <string>
#include <map>
using namespace std;

void rep(string& str, const string& from, const string& to) {
    std::string::size_type pos = 0;
    while (pos = str.find(from, pos), pos != string::npos) {
        str.replace(pos, from.length(), to);
        pos += to.length();
    }
}

int main(){
    string l;
    getline(cin, l);
    rep(l, "apple", "@@@@@");
    rep(l, "peach", "apple");
    rep(l, "@@@@@", "peach");
    cout << l << endl;
}