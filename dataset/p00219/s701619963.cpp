#include <iostream>
#include <string>
#include <vector>
using namespace std;


string bar(int len) {
    if (len <= 0) {
        return "-";
    }
    string ret = "";
    for (int i=0; i<len; ++i) {
        ret += "*";
    }
    return ret;
}

int main() {
    int n, a;
    while (cin >> n, n) {
        vector<int> num(10, 0);
        for (int i=0; i<n; ++i) {
            cin >> a;
            num[a] ++;
        }
        for (int i=0; i<10; ++i) {
            cout << bar(num[i]) << endl;
        }
    }
    return 0;
}