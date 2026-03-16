#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d = 0, e = 0;
    char ch;
    while (cin >> a >> ch >> b >> ch >> c) {
        if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
            d++;
        }
        if (a == b) e++;
    }
    cout << d << "\n" << e << endl;
    return 0;
}