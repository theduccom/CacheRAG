#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, num1, num2;
    string s;

    cin >> n;

    while(n--) {

        cin >> s;

        sort(&s[0], &s[0] + s.size());
        num1 = atoi(s.c_str());

        sort(&s[0], &s[0] + s.size(), greater<int>());
        num2 = atoi(s.c_str());

        cout << num2 - num1 << endl;

    }

}