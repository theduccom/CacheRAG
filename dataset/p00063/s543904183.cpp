#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string st;
    string origin;
    int cnt = 0;

    while (cin >> st) {
        origin = st;
        reverse(st.begin(), st.end());
        if (st == origin) cnt++;
    }
    cout << cnt << endl;

    return 0;
}