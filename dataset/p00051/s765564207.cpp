#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

long long toLL(string s) {
    stringstream ss(s);
    long long ret;
    ss >> ret;
    return ret;
}

int main() {
    int n; string t;
    cin >> n;
    while (n--) {
        cin >> t;
        string l, s;
        sort(t.begin(), t.end());
        s = t;
        sort(t.begin(), t.end(), greater<char>());
        l = t;
        cout << abs(toLL(s) - toLL(l)) << endl;;
    }
    return 0;
}