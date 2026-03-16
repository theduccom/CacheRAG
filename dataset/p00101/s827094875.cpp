#include <iostream>
#include <string>
using namespace std;

string check(string str) {
    int n;
    while((n = str.find("Hoshino")) != string::npos) {
        str[n + 6] = 'a';
    }
    return str;
}

int main() {
    int n;
    cin >> n;

    string line;
    getline(cin, line);

    for (int i = 0; i < n; i++) {
        getline(cin, line);
        cout << check(line) << endl;
    }
}