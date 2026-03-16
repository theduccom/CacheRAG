#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string s;
    int x = 0, y = 0;
    while (cin >> s) {
        int a, b, c;
        sscanf(s.c_str(), "%d,%d,%d", &a, &b, &c);
        if (a == b) y++;
        if (a * a + b * b == c * c) x++;
    }
    cout << x << "\n" << y << endl;
    return 0;
}