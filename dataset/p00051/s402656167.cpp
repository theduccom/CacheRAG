#include <iostream>
#include <algorithm>
using namespace std;

int calc(string s) {
    int _min, _max;
    sort(s.begin(), s.end());
    _min = atoi(s.c_str());
    reverse(s.begin(), s.end());
    _max = atoi(s.c_str());
    return (_max - _min);
}

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << calc(s) << endl;
    }
    return 0;
}